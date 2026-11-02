// rea decompile_all
// name: FUN_0049b250
// address: 0x49b250
// body: available
// range: 0x49b250-0x49b3f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b250(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  bool bVar4;
  double in_XMM1_Qa;
  double in_XMM2_Qa;
  double in_XMM3_Qa;
  uint local_24;
  int *local_1c [2];
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (((*(double *)(in_ECX + 0x70) != in_XMM1_Qa) || (*(double *)(in_ECX + 0x78) != in_XMM2_Qa)) ||
     (*(double *)(in_ECX + 0x80) != in_XMM3_Qa)) {
    *(undefined4 *)(in_ECX + 0x124) = 7;
    *(double *)(in_ECX + 0x70) = in_XMM1_Qa;
    *(double *)(in_ECX + 0x78) = in_XMM2_Qa;
    *(double *)(in_ECX + 0x80) = in_XMM3_Qa;
    if (in_XMM3_Qa != 0.0) {
      local_24 = SUB84(in_XMM3_Qa * 10000000.0 + 6755399441055744.0,0);
      iVar2 = (local_24 ^ (int)local_24 >> 0x1f) - ((int)local_24 >> 0x1f);
      iVar3 = iVar2 / 10;
      if (iVar2 == iVar3 * 10) {
        iVar2 = 7;
        do {
          iVar2 = iVar2 + -1;
          bVar4 = iVar3 == (iVar3 / 10) * 10;
          iVar3 = iVar3 / 10;
        } while (bVar4);
        *(int *)(in_ECX + 0x124) = iVar2;
      }
    }
    if ((*(int *)(in_ECX + 0x18) == 9) || (*(int *)(in_ECX + 0x18) == 10)) {
      puVar1 = (undefined4 *)FUN_0063bf80(local_1c);
      (**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
      (**(code **)(*local_1c[0] + 0x54))(local_14);
      FUN_0049b650(0,0);
      puVar1 = (undefined4 *)FUN_0063bf80(local_1c);
      (**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
      (**(code **)(*local_1c[0] + 0x54))(local_14);
      FUN_0049b870(0,0);
    }
    else {
      puVar1 = (undefined4 *)FUN_0063bf80(local_1c);
      (**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
      (**(code **)(*local_1c[0] + 0x54))(local_14);
      FUN_0049b400(0);
    }
    FUN_0049c180();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

