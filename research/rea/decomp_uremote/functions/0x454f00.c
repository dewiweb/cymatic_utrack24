// rea decompile_all
// name: FUN_00454f00
// address: 0x454f00
// body: available
// range: 0x454f00-0x45534d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00454f00(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0x88) != '\0') {
    FUN_004ebf83();
    iVar7 = FUN_0046694e();
    FUN_004652d6();
    FUN_004ebf83();
    iVar8 = FUN_0046694e();
    FUN_004652d6();
    FUN_004ebf83();
    iVar9 = FUN_0046694e();
    FUN_004652d6();
    FUN_004ebf83();
    iVar10 = FUN_0046694e();
    FUN_004652d6();
    FUN_004ebf83();
    iVar11 = FUN_0046694e();
    FUN_004652d6();
    FUN_004ebf83();
    iVar12 = FUN_0046694e();
    FUN_004652d6();
    FUN_004d076d();
    if (iVar7 < 2000) {
      FUN_004d076d();
    }
    cVar1 = FUN_004733bd();
    FUN_004d076d();
    FUN_004c1eee();
    FUN_004764ae(&stack0xffffffbc);
    FUN_004c1eee();
    FUN_004d076d();
    if ((iVar8 < 1) || (0xc < iVar8)) {
      FUN_004d076d();
    }
    cVar2 = FUN_004733bd();
    FUN_004d076d();
    FUN_004c1eee();
    FUN_004764ae(&stack0xffffffbc);
    FUN_004c1eee();
    FUN_004d076d();
    if ((iVar9 < 1) || (0x1f < iVar9)) {
      FUN_004d076d();
    }
    cVar3 = FUN_004733bd();
    FUN_004d076d();
    FUN_004c1eee();
    FUN_004764ae(&stack0xffffffbc);
    FUN_004c1eee();
    FUN_004d076d();
    if ((iVar10 < 0) || (0x17 < iVar10)) {
      FUN_004d076d();
    }
    cVar4 = FUN_004733bd();
    FUN_004d076d();
    FUN_004c1eee();
    FUN_004764ae(&stack0xffffffbc);
    FUN_004c1eee();
    FUN_004d076d();
    if ((iVar11 < 0) || (0x3b < iVar11)) {
      FUN_004d076d();
    }
    cVar5 = FUN_004733bd();
    FUN_004d076d();
    FUN_004c1eee();
    FUN_004764ae(&stack0xffffffbc);
    FUN_004c1eee();
    FUN_004d076d();
    if ((iVar12 < 0) || (0x3b < iVar12)) {
      FUN_004d076d();
    }
    cVar6 = FUN_004733bd();
    FUN_004d076d();
    FUN_004c1eee();
    FUN_004764ae(&stack0xffffffbc);
    FUN_004c1eee();
    if (((((cVar1 == '\0' && cVar2 == '\0') && cVar3 == '\0') && cVar4 == '\0') && cVar5 == '\0') &&
        cVar6 == '\0') {
      FUN_00467cf8(iVar7,iVar8,iVar9,iVar10,iVar11,iVar12);
      FUN_00467e6f();
      FUN_0045d81a(*(undefined4 *)(unaff_EDI + 0x84));
      *(undefined1 *)(unaff_EDI + 0x88) = 0;
      FUN_004c1613();
    }
  }
  return;
}

