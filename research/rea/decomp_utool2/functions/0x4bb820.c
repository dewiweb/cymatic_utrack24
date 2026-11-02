// rea decompile_all
// name: FUN_004bb820
// address: 0x4bb820
// body: available
// range: 0x4bb820-0x4bb89e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb820(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  if (-1 < param_1) {
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      UNLOCK();
    }
    iVar2 = in_ECX[2];
    if (param_1 < iVar2) {
      puVar3 = *(undefined4 **)(param_1 * 4 + *in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar3 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar3)(1);
        }
      }
      *(int *)(param_1 * 4 + *in_ECX) = param_2;
      return;
    }
    if (in_ECX[1] < iVar2 + 1) {
      FUN_00409cf0((iVar2 + 1) / 2 + iVar2 + 9 & 0xfffffff8);
    }
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1;
    *(int *)(*in_ECX + iVar2 * 4) = param_2;
  }
  return;
}

