// rea decompile_all
// name: FUN_0046bb05
// address: 0x46bb05
// body: available
// range: 0x46bb05-0x46bb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046bb05(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int in_EDX;
  int iVar5;
  int unaff_ESI;
  short asStack_28 [16];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  sVar1 = 0;
  iVar3 = 1;
  do {
    sVar1 = (*(short *)(in_EDX + iVar3 * 2 + -2) + sVar1) * 2;
    asStack_28[iVar3] = sVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  if (-1 < param_1) {
    do {
      uVar4 = (uint)*(ushort *)(unaff_ESI + 2 + iVar5 * 4);
      if (uVar4 != 0) {
        sVar1 = asStack_28[uVar4];
        asStack_28[uVar4] = sVar1 + 1;
        uVar2 = FUN_0046cd7b(sVar1,uVar4);
        *(undefined2 *)(unaff_ESI + iVar5 * 4) = uVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= param_1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

