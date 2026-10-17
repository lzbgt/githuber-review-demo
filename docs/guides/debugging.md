# Troubleshooting Navigation and Diagrams

If a chart appears as a spinner, verify the source is a real Mermaid code fence and the local renderer has produced SVG. GitHub's Markdown REST response may contain an enrichment placeholder.

1. Open [Robot architecture](../architecture.md) and confirm the diagram has labeled nodes and arrows.
2. Open [control math](../control_math.md) and confirm fractions and summations are typeset.
3. Open [HTML preview](../index.html) and follow its links back into the repository.
4. Use the breadcrumb navigation to return directly to [home](../../README.md).

GitHuber can revalidate unchanged files with GitHub ETags and should not redownload identical content.