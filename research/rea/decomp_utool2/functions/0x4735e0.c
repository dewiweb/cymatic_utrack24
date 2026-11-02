// rea decompile_all
// name: FUN_004735e0
// address: 0x4735e0
// body: available
// range: 0x4735e0-0x473685 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004735e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00474010(param_1,param_1,param_2,0xff,param_3);
  param_1 = 0;
  if (0 < *(int *)(in_ECX + 0x18)) {
    do {
      uVar1 = *(undefined4 *)(in_ECX + 0xc);
      iVar2 = *(int *)(in_ECX + 0x14);
      iVar3 = *(int *)(in_ECX + 0x10);
      if (local_8 < iVar2) {
        FID_conflict__free(local_c);
        local_c = (void *)FUN_004c554b(iVar2);
        local_8 = iVar2;
      }
      FUN_004762b0(local_c,uVar1,iVar2);
      FUN_0067c650(uVar1,iVar3 + param_1,local_c,1,iVar2);
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(in_ECX + 0x18));
  }
  FID_conflict__free(local_c);
  return;
}

