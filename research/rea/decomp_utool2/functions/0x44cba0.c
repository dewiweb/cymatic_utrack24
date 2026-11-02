// rea decompile_all
// name: FUN_0044cba0
// address: 0x44cba0
// body: available
// range: 0x44cba0-0x44cd0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044cba0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ff908;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(in_ECX + 0x14) <= *(int *)(in_ECX + 0x1c)) &&
     ((*(int *)(in_ECX + 0x14) < *(int *)(in_ECX + 0x1c) ||
      (*(uint *)(in_ECX + 0x10) <= *(uint *)(in_ECX + 0x18))))) {
    if ((*(int *)(in_ECX + 0x40) == 0) || (*(int *)(in_ECX + 0x3c) == 0)) {
      return 0xffffffff;
    }
    ExceptionList = &local_10;
    DVar5 = timeGetTime();
    if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar5;
    }
    if (DVar5 <= *(int *)(in_ECX + 0x5c) + 3000U) {
      ExceptionList = local_10;
      return 200;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
    puVar1 = *(undefined4 **)(in_ECX + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x40) = 0;
      (**(code **)*puVar1)(1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x44));
    ExceptionList = local_10;
    return 0xffffffff;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x44);
  bVar2 = false;
  ExceptionList = &local_10;
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x40) == 0) {
    if ((*(int *)(in_ECX + 0x3c) != 0) && (iVar6 = FUN_006358c0(uVar4), iVar6 != 0)) {
      puVar7 = (undefined4 *)FUN_00603020(iVar6);
      puVar1 = *(undefined4 **)(in_ECX + 0x40);
      if ((puVar1 != puVar7) &&
         (*(undefined4 **)(in_ECX + 0x40) = puVar7, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    if (*(int *)(in_ECX + 0x40) == 0) goto LAB_0044ccd3;
  }
  cVar3 = FUN_0044cd10();
  if (cVar3 == '\0') {
    LeaveCriticalSection(lpCriticalSection);
    ExceptionList = local_10;
    return 0;
  }
  bVar2 = true;
LAB_0044ccd3:
  local_8 = 0xffffffff;
  LeaveCriticalSection(lpCriticalSection);
  if (bVar2) {
    FUN_0060dec0(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x30),
                 *(undefined4 *)(in_ECX + 0x34));
  }
  ExceptionList = local_10;
  return 200;
}

