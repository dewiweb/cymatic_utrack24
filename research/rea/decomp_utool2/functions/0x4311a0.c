// rea decompile_all
// name: FUN_004311a0
// address: 0x4311a0
// body: available
// range: 0x4311a0-0x431365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004311a0(void)

{
  undefined4 *_Dst;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  char *pcVar6;
  int *_Memory;
  char *local_30;
  char *local_2c;
  int local_24;
  int local_1c;
  char *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe0a8;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _Dst = (undefined4 *)(in_ECX + 0x9c);
  _memset(_Dst,0,0x600);
  local_1c = 0x20;
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x3c))(_Dst,&local_1c,uVar2);
  *(int *)(in_ECX + 0x69c) = local_1c;
  local_11 = '\0';
  local_24 = 0;
  if (0 < local_1c) {
    pcVar6 = (char *)(in_ECX + 0xac);
    do {
      FUN_0045c990("clock: ");
      local_8 = 0;
      pcVar3 = pcVar6;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar3 - (int)(pcVar6 + 1);
      pcVar3 = local_18;
      if (0 < iVar4) {
        pcVar3 = local_18 + 1;
        pcVar5 = local_18;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00455850(local_18);
        local_18 = local_2c;
        FUN_004c2c30(local_2c + ((int)pcVar5 - (int)pcVar3),pcVar6,iVar4);
        (local_2c + ((int)pcVar5 - (int)pcVar3))[iVar4] = '\0';
        pcVar3 = local_2c;
      }
      if (*(int *)(pcVar6 + -4) != 0) {
        local_11 = '\x01';
        pcVar5 = pcVar3;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00455850(pcVar3);
        local_18 = local_30;
        builtin_strncpy(local_30 + ((int)pcVar5 - (int)(pcVar3 + 1))," (cur)",7);
        pcVar3 = local_30;
      }
      _Memory = (int *)(pcVar3 + -8);
      local_8 = 0xffffffff;
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar4 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      pcVar6 = pcVar6 + 0x30;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(in_ECX + 0x69c));
  }
  if ((1 < *(int *)(in_ECX + 0x69c)) && (local_11 == '\0')) {
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x40))(*_Dst);
    Sleep(0x14);
  }
  ExceptionList = local_10;
  return;
}

