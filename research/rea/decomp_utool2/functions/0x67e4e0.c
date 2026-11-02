// rea decompile_all
// name: FUN_0067e4e0
// address: 0x67e4e0
// body: available
// range: 0x67e4e0-0x67e588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067e4e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    FUN_00465cb0(param_1);
    return;
  }
  puVar3 = (undefined4 *)in_ECX[2];
  in_ECX[2] = 0;
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
  puVar4 = operator_new(0x20);
  *puVar4 = *param_1;
  puVar4[1] = param_1[1];
  puVar4[2] = param_1[2];
  puVar4[3] = param_1[3];
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_1 + 4);
  FUN_0046f6b0(param_1 + 5);
  puVar3 = (undefined4 *)in_ECX[1];
  if ((puVar3 != puVar4) && (in_ECX[1] = puVar4, puVar3 != (undefined4 *)0x0)) {
    FID_conflict__free((void *)puVar3[5]);
    FUN_004bfe14(puVar3,0x20);
  }
  *in_ECX = DAT_00c7ef90;
  return;
}

