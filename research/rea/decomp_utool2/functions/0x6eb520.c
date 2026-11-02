// rea decompile_all
// name: FUN_006eb520
// address: 0x6eb520
// body: available
// range: 0x6eb520-0x6eb634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eb520(void)

{
  undefined4 *puVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  int *local_48 [2];
  undefined1 local_40 [8];
  int *local_38 [2];
  undefined1 local_30 [8];
  int *local_28 [2];
  undefined1 local_20 [8];
  int *local_18 [2];
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x14) != 0) {
    uVar6 = 1;
    puVar1 = (undefined4 *)FUN_0063bf80(local_18);
    fVar2 = (float10)(**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2,uVar6);
    (**(code **)(*local_18[0] + 0x54))(local_10);
    puVar1 = (undefined4 *)FUN_0063bf80(local_28);
    fVar3 = (float10)(**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
    (**(code **)(*local_28[0] + 0x54))(local_20);
    puVar1 = (undefined4 *)FUN_0063bf80(local_38);
    fVar4 = (float10)(**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
    (**(code **)(*local_38[0] + 0x54))(local_30);
    puVar1 = (undefined4 *)FUN_0063bf80(local_48);
    fVar5 = (float10)(**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
    (**(code **)(*local_48[0] + 0x54))(local_40);
    FUN_006ec140(CONCAT13((char)(int)fVar2,
                          CONCAT12((char)(int)fVar5,CONCAT11((char)(int)fVar4,(char)(int)fVar3))),
                 uVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

