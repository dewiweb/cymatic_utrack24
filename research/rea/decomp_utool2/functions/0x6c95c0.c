// rea decompile_all
// name: FUN_006c95c0
// address: 0x6c95c0
// body: available
// range: 0x6c95c0-0x6c96b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c95c0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  uint extraout_ECX;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726183;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (in_ECX[0x1e] == 0) {
    in_ECX[0x1d] = 0x17c;
    in_ECX[0x1e] = 0x17c;
    local_8 = 0;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(in_ECX + 0x1c);
    local_8 = 0xffffffff;
  }
  else {
    FUN_00463b90(uVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  uVar2 = in_ECX[0x21];
  if (uVar2 == 0) {
LAB_006c9678:
    uVar2 = 1;
  }
  else {
    if (DAT_00c8a678 == uVar2) {
      cVar1 = FUN_006ceda0();
      uVar2 = extraout_ECX;
      if (cVar1 == '\0') goto LAB_006c9678;
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  (**(code **)(*in_ECX + 0x28))(uVar2);
  puVar3 = (undefined4 *)FUN_0040dde0(local_20,2);
  FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  ExceptionList = local_10;
  return;
}

