// rea decompile_all
// name: FUN_005118e0
// address: 0x5118e0
// body: available
// range: 0x5118e0-0x511a4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005118e0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708c84;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = (int)juce::Timer::vftable;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  in_ECX[0x21] = param_1;
  bVar1 = *(byte *)(in_ECX + 0x1a);
  *in_ECX = (int)Meter::vftable;
  in_ECX[0x1c] = (int)Meter::vftable;
  in_ECX[0x22] = 3;
  in_ECX[0x25] = 2000;
  in_ECX[0x26] = 0x7d1;
  in_ECX[0x24] = 0x40;
  in_ECX[0x23] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x29] = 0;
  if ((bVar1 & 4) == 0) {
    *(byte *)(in_ECX + 0x1a) = bVar1 | 4;
    if ((bVar1 & 1) != 0) {
      iVar2 = FUN_0068db10();
      if (iVar2 != 0) {
        uStack_28 = *(undefined4 *)(iVar2 + 8);
        uStack_2c = 0x5119c1;
        (**(code **)(*in_ECX + 0x30))();
      }
    }
    FUN_006e6400(auStack_30);
    FUN_006ce9f0(1);
  }
  uStack_28 = 0x5119e0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (in_ECX[0x1e] == 0) {
    in_ECX[0x1d] = 0x32;
    in_ECX[0x1e] = 0x32;
    local_8._0_1_ = 2;
    if (DAT_00c8a668 == 0) {
      uStack_28 = 0x511a08;
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    uStack_28 = 0x511a1f;
    FUN_00463c00();
  }
  else {
    FUN_00463b90();
  }
  uStack_28 = 0x511a38;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = local_10;
  return;
}

