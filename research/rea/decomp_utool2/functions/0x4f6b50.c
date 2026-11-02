// rea decompile_all
// name: FUN_004f6b50
// address: 0x4f6b50
// body: available
// range: 0x4f6b50-0x4f6c0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6b50(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x4f6b64;
  iVar2 = (**(code **)(in_ECX[-0x1c] + 0xbc))();
  in_ECX[0x6e] = iVar2;
  if (iVar2 == 0) {
    in_ECX[0x41] = 0;
  }
  else {
    uStack_14 = 0x4f6b7d;
    iVar2 = (**(code **)(*in_ECX + 4))();
    if (in_ECX[0x6e] == iVar2) {
      in_ECX[0x41] = 1;
    }
    else {
      in_ECX[0x41] = 2;
    }
  }
  FUN_006e6400(auStack_20);
  FUN_006ce9f0(1);
  iVar2 = in_ECX[0x62];
  if ((*(int *)(iVar2 + 0x328) <= param_1) &&
     (iVar1 = *(int *)(iVar2 + 0x324), param_1 < *(int *)(iVar2 + 0x328) + iVar1)) {
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    if ((uint)(param_1 % iVar3) < *(uint *)(iVar2 + 0x324)) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x31c) + (param_1 % iVar3) * 4);
      goto LAB_004f6bf2;
    }
  }
  iVar2 = 0;
LAB_004f6bf2:
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x74) != 0)) {
    uStack_14 = 1;
    uStack_18 = 2;
    uStack_1c = 0x4f6c06;
    FUN_006cc500();
  }
  return;
}

