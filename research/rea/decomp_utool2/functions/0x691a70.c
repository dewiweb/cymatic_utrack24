// rea decompile_all
// name: FUN_00691a70
// address: 0x691a70
// body: available
// range: 0x691a70-0x691b55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00691a70(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 *puVar5;
  undefined1 local_4c [40];
  void *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721a02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar3 = FUN_006e6420(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar3 != '\0') {
    local_24 = (void *)0x0;
    uStack_20 = 0;
    uStack_1c = 0;
    puStack_18 = (undefined4 *)0x0;
    local_8 = 0;
    local_14 = operator_new(0x90);
    local_8._0_1_ = 1;
    if (*(char *)(in_ECX + 8) == '\0') {
      uVar4 = *(undefined4 *)(in_ECX + -0x60);
    }
    else {
      uVar4 = *(undefined4 *)(in_ECX + -100);
    }
    uVar4 = FUN_004a2dd0(in_ECX + -0x7c,uVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_006a05f0(extraout_ECX,uVar4,extraout_ECX);
    uVar4 = *(undefined4 *)(in_ECX + 4);
    puVar5 = local_4c;
    FUN_006d1110(puVar5,uVar4);
    uVar4 = FUN_006d1070(puVar5,uVar4);
    FUN_006a0120(uVar4,0,0);
    if (puStack_18 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puStack_18 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puStack_18)(1);
      }
    }
    FUN_004b00e0();
    FID_conflict__free(local_24);
  }
  ExceptionList = local_10;
  return;
}

