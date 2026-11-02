// rea decompile_all
// name: FUN_0069baf0
// address: 0x69baf0
// body: available
// range: 0x69baf0-0x69bbb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069baf0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  float10 fVar2;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined1 auStack_64 [8];
  int *piStack_5c;
  undefined1 local_58 [4];
  undefined1 auStack_54 [8];
  uint uStack_4c;
  uint local_44;
  
  local_44 = DAT_00c76070 ^ (uint)auStack_78;
  puVar1 = (undefined4 *)FUN_0063bf80(local_58);
  fVar2 = (float10)(**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
  auStack_64 = (undefined1  [8])(double)fVar2;
  (**(code **)(*piStack_5c + 0x54))(auStack_54);
  fVar2 = (float10)(**(code **)(*(int *)(in_ECX + -0x7c) + 0xb8))();
  unique0x0000aa00 = (double)fVar2;
  if (unique0x0000aa00 != (double)CONCAT44(auStack_64._0_4_,uStack_6c._4_4_)) {
    puVar1 = (undefined4 *)FUN_0063bf80(auStack_64 + 4);
    fVar2 = (float10)(**(code **)(*(int *)*puVar1 + 0xc))(puVar1 + 2);
    uStack_6c = (double)fVar2;
    (**(code **)(*(int *)auStack_64._0_4_ + 0x54))(&piStack_5c);
    (**(code **)(*(int *)(in_ECX + -0x7c) + 0xb4))(CONCAT44((undefined4)uStack_6c,uStack_70));
  }
  __security_check_cookie(uStack_4c ^ (uint)&stack0xffffff80);
  return;
}

