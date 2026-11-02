// rea decompile_all
// name: FUN_0040920c
// address: 0x40920c
// body: available
// range: 0x40920c-0x409281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040920c(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  int unaff_ESI;
  int iVar4;
  int local_8;
  
  uVar3 = 0;
  local_8 = 0;
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    if (param_1 != 0) {
      puVar1 = *(ushort **)(unaff_ESI + 8);
      iVar4 = param_1;
      do {
        if (uVar3 < *puVar1) {
          uVar3 = *puVar1;
        }
        puVar1 = puVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = FUN_00411976(2,0,&local_8);
    *(undefined4 *)(unaff_ESI + 0xc) = uVar2;
    iVar4 = param_1;
    if (local_8 == 0) {
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        *(short *)(*(int *)(unaff_ESI + 0xc) +
                  (uint)*(ushort *)(*(int *)(unaff_ESI + 8) + iVar4 * 2) * 2) = (short)iVar4;
      }
      *(uint *)(unaff_ESI + 0x10) = (uint)uVar3;
      *(int *)(unaff_ESI + 0x14) = param_1;
    }
  }
  return local_8;
}

