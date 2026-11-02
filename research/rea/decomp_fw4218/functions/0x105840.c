// rea decompile_all
// name: FUN_00105840
// address: 0x105840
// body: available
// range: 0x105840-0x105a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00105840(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_28 = FUN_001a47ec(param_2);
  iVar3 = FUN_0022dad0(param_1 + 4,&local_28);
  if (iVar3 == 0) {
    FUN_00002898(_DAT_00105a64);
    FUN_00002898(s____the_overlay_activations_map_i_00105a66 + 2);
  }
  else {
    local_2c = FUN_001a47ec(param_2);
    local_30 = FUN_00233574(param_1 + 4,&local_2c);
    FUN_00235ac4(auStack_3c,local_30);
    while( true ) {
      FUN_00235aa4(auStack_34,local_30);
      iVar3 = FUN_0022d7ac(auStack_3c,auStack_34);
      if (iVar3 == 0) break;
      bVar1 = false;
      iVar3 = FUN_0022d7cc(auStack_3c);
      if ((*(int *)(iVar3 + 0xc) == 0) ||
         (iVar3 = FUN_0022d7cc(auStack_3c), *(int *)(iVar3 + 0xc) == param_3)) {
        iVar3 = FUN_001a4804(param_2);
        iVar4 = FUN_0022d7cc(auStack_3c);
        if (iVar3 != *(int *)(iVar4 + 8)) goto LAB_0010593c;
        iVar3 = FUN_0022d7cc(auStack_3c);
        if (*(int *)(iVar3 + 4) != 0) {
          FUN_001a482c(auStack_4c,param_2);
          bVar1 = true;
          iVar3 = FUN_0022d7cc(auStack_3c);
          iVar3 = (**(code **)(iVar3 + 4))(auStack_4c,param_3);
          if (iVar3 == 0) goto LAB_0010593c;
        }
        bVar2 = true;
      }
      else {
LAB_0010593c:
        bVar2 = false;
      }
      if (bVar1) {
        FUN_001a4854(auStack_4c);
      }
      if (bVar2) {
        puVar5 = (undefined4 *)FUN_0022d7cc(auStack_3c);
        uVar6 = (**(code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5);
        FUN_00002898(s_TRACE__UIOverlayActivations__act_00105a2c,uVar6);
        puVar5 = (undefined4 *)FUN_0022d7cc(auStack_3c);
        piVar7 = (int *)*puVar5;
        uVar6 = FUN_001a482c(auStack_5c,param_2);
        (**(code **)(*piVar7 + 0x10))(piVar7,uVar6);
        FUN_001a4854(auStack_5c);
        puVar5 = (undefined4 *)FUN_0022d7cc(auStack_3c);
        return *puVar5;
      }
      FUN_00232b7c(auStack_38,auStack_3c,0);
    }
  }
  return 0;
}

