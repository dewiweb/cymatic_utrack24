// rea decompile_all
// name: FUN_00480537
// address: 0x480537
// body: available
// range: 0x480537-0x48059b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480537(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  param_5 = param_5 + -1;
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    do {
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar4 = *(int *)(param_4 + *(int *)(param_3 + iVar5 * 4));
          uVar6 = 0;
          if (uVar3 != 0) {
            puVar7 = (undefined1 *)(*param_2 + iVar5);
            do {
              uVar1 = *puVar7;
              puVar7 = puVar7 + iVar2;
              *(undefined1 *)(uVar6 + iVar4) = uVar1;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar3);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 4;
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

