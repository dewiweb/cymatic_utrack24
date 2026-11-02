// rea decompile_all
// name: FUN_00583b10
// address: 0x583b10
// body: available
// range: 0x583b10-0x583bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00583b10(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined1 auStack_74 [16];
  undefined8 uStack_64;
  int *piStack_5c;
  undefined1 auStack_54 [16];
  uint local_44;
  
  local_44 = DAT_00c76070 ^ (uint)auStack_74;
  if (0 < *(int *)(in_ECX + 0x80)) {
    puVar2 = (undefined4 *)FUN_0063bf80();
    fVar5 = (float10)(**(code **)(*(int *)*puVar2 + 0xc))();
    uStack_64 = (double)fVar5;
    (**(code **)(*piStack_5c + 0x54))(auStack_54);
    fVar5 = (float10)FUN_006e1340(CONCAT44(piStack_5c,uStack_64._4_4_));
    iVar1 = *(int *)(in_ECX + 0x1c);
    iVar3 = *(int *)(in_ECX + 0x18);
    uStack_64._0_4_ = (float)fVar5;
    iVar4 = iVar3;
    if (iVar1 < iVar3) {
      iVar4 = iVar1;
    }
    uStack_64._4_4_ = (iVar3 - iVar4) / 2;
    iVar3 = 0;
    if (*(int *)(in_ECX + 0x7c) != 0) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x7c) + 0xc);
    }
    FUN_00682f90(in_ECX + 0x7c,uStack_64._4_4_,(iVar1 - iVar4) / 2,iVar4,iVar4,iVar3,
                 (int)((float)(*(int *)(in_ECX + 0x80) + -1) * (float)uStack_64) * iVar3,iVar3,iVar3
                 ,iVar3);
  }
  __security_check_cookie(local_44 ^ (uint)auStack_74);
  return;
}

