// rea decompile_all
// name: FUN_00500f31
// address: 0x500f31
// body: available
// range: 0x500f31-0x500fa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500f31(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  int iVar3;
  
  if (*(uint *)(unaff_ESI + 0xc) != param_2) {
    FUN_004fb707();
    iVar3 = 2;
    do {
      uVar1 = 1 << ((byte)iVar3 & 0x1f);
      uVar2 = uVar1 & param_2;
      if ((uVar1 & *(uint *)(unaff_ESI + 0xc)) != uVar2) {
        if (*(int *)(unaff_ESI + 0x10) != iVar3) {
          *(int *)(unaff_ESI + 0x10) = iVar3;
          (*(code *)**(undefined4 **)(unaff_ESI + 0x14))(iVar3 + 0x84c0);
        }
        if (uVar2 == 0) {
          glDisable(0xde1);
          *(undefined4 *)(unaff_ESI + iVar3 * 4) = 0;
        }
        else {
          glEnable();
        }
        FUN_004fa480();
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    *(uint *)(unaff_ESI + 0xc) = param_2;
  }
  return;
}

