// rea decompile_all
// name: FUN_00537780
// address: 0x537780
// body: available
// range: 0x537780-0x5378a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00537876) */
/* WARNING: Removing unreachable block (ram,0x0053787e) */

void FUN_00537780(uint param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int *_Memory;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070d82d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 4);
  if ((((iVar1 != 0) && ((int)param_1 < (int)*(uint *)(iVar1 + 0x5c))) &&
      (param_1 < *(uint *)(iVar1 + 0x5c))) &&
     ((*(int *)(*(int *)(iVar1 + 0x54) + param_1 * 4) != 0 &&
      ((*(uint *)(param_2 + 0x10) >> 5 & 1) != 0)))) {
    local_8 = 0;
    pcVar6 = "Reveal file on disk";
    FUN_0045c990("Reveal file on disk",DAT_00c76070 ^ (uint)&stack0xfffffffc);
    uVar5 = 0;
    uVar4 = 1;
    puVar3 = &param_1;
    local_8._0_1_ = 1;
    uVar2 = 1;
    FUN_006dfcb0(1,puVar3,1,0,pcVar6);
    local_8._0_1_ = 0;
    _Memory = (int *)(param_1 - 8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        uVar5 = 0x53783e;
        FID_conflict__free(_Memory);
        pcVar6 = (char *)_Memory;
      }
    }
    iVar1 = FUN_006dfc40(uVar2,puVar3,uVar4,uVar5,pcVar6);
    if (iVar1 == 1) {
      FUN_005406d0(&param_1);
      local_8._0_1_ = 2;
      FUN_00633ec0();
      FUN_0040ea50();
    }
    FUN_004b00e0();
    FID_conflict__free((void *)0x0);
  }
  ExceptionList = local_10;
  return;
}

