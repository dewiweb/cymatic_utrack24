// rea decompile_all
// name: FUN_00509ac0
// address: 0x509ac0
// body: available
// range: 0x509ac0-0x509c4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509ac0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  float10 fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  double local_2c;
  int *piStack_24;
  undefined1 local_20 [4];
  undefined1 auStack_1c [16];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_2c;
  FUN_00684c50(DAT_00c7ef90);
  FUN_00684310(*(undefined4 *)(in_ECX + 0x90),*(undefined4 *)(in_ECX + 0x94),
               *(undefined4 *)(in_ECX + 0x98),*(undefined4 *)(in_ECX + 0x9c));
  if ((*(char *)(in_ECX + 0x128) != '\0') &&
     (auVar6._8_8_ = 0, auVar6._0_8_ = *(double *)(in_ECX + 0x88), *(double *)(in_ECX + 0x88) != 0.0
     )) {
    uVar1 = *(undefined4 *)(in_ECX + 0xb4);
    local_2c = (double)CONCAT44(local_2c._4_4_,*(undefined4 *)(in_ECX + 0xb0));
    puVar3 = (undefined4 *)FUN_0063bf80(local_20);
    fVar4 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2);
    local_2c = (double)fVar4;
    (**(code **)(*piStack_24 + 0x54))(auStack_1c);
    iVar2 = *(int *)(*(int *)(in_ECX + 0x118) + 0x18);
    if ((((iVar2 == 0) || (((iVar2 == 2 || (iVar2 == 9)) || (iVar2 == 0xb)))) ||
        (((iVar2 == 1 || (iVar2 == 3)) || (iVar2 == 10)))) || (iVar2 == 0xc)) {
      FUN_0049c350();
      fVar5 = auVar6._0_4_;
    }
    else {
      fVar5 = 0.0;
    }
    FUN_00508b00((int)((float)local_2c._0_4_ + fVar5),uVar1);
  }
  FUN_00684c50(DAT_00c7ef94);
  FUN_00508b00((int)(*(float *)(in_ECX + 0x90) - (float)*(int *)(in_ECX + 0xb4) * 0.6),
               *(int *)(in_ECX + 0xb4));
  __security_check_cookie(local_c ^ (uint)&local_2c);
  return;
}

