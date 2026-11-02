// rea decompile_all
// name: FUN_0040abd0
// address: 0x40abd0
// body: available
// range: 0x40abd0-0x40ad3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040abd0(int param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fc28e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  in_ECX[0x5e] = param_1;
  FUN_0040da30();
  if ((-(uint)(in_ECX != (int *)0x0) & (uint)(in_ECX + 0x5d)) != 0) {
    FUN_004097d0();
  }
  DVar2 = timeGetTime();
  if ((DAT_00c8a644 <= DVar2) || (DVar2 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar2;
  }
  in_ECX[0x78] = DVar2;
  iVar3 = FUN_0040de70(in_ECX);
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  FUN_0040df40();
  cVar1 = FUN_006d1aa0();
  if (cVar1 == '\0') {
    FUN_0048c530();
    FUN_006ca6c0(in_ECX);
    FUN_006ca640(in_ECX);
    (**(code **)(*in_ECX + 0x28))();
    FUN_006cc500(2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (in_ECX[0x5a] == 0) {
    in_ECX[0x59] = 100;
    in_ECX[0x5a] = 100;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00();
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  FUN_0040d9d0();
  ExceptionList = local_10;
  return;
}

