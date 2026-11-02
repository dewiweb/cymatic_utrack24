// rea decompile_all
// name: FUN_00418430
// address: 0x418430
// body: available
// range: 0x418430-0x41850e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418430(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  
  iVar4 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar4) {
    FUN_00418510(iVar4 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  uVar2 = in_ECX[2];
  if (param_1 < uVar2) {
    puVar1 = (undefined4 *)(*in_ECX + param_1 * 0x18);
    if (0 < (int)(uVar2 - param_1)) {
      FUN_004c1df0(puVar1 + 6,puVar1,(uVar2 - param_1) * 0x18);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      iVar4 = param_2[2];
      puVar1[2] = iVar4;
      piVar3 = (int *)(iVar4 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      puVar1[3] = param_2[3];
      *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 4);
      puVar1[5] = param_2[5];
    }
    in_ECX[2] = in_ECX[2] + 1;
    return;
  }
  in_ECX[2] = uVar2 + 1;
  puVar1 = (undefined4 *)(*in_ECX + uVar2 * 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    iVar4 = param_2[2];
    puVar1[2] = iVar4;
    piVar3 = (int *)(iVar4 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    puVar1[3] = param_2[3];
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 4);
    puVar1[5] = param_2[5];
  }
  return;
}

