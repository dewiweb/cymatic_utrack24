// rea decompile_all
// name: FUN_001ab3ac
// address: 0x1ab3ac
// body: available
// range: 0x1ab3ac-0x1ab4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_001ab3ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 auStack_3c [8];
  int *local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 8))();
  if (iVar1 == 0) {
    uVar4 = 10;
    *(undefined1 *)(param_1 + 0x79) = 10;
  }
  else {
    uVar4 = 2;
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  *(undefined1 *)(param_1 + 0x78) = uVar4;
  local_28 = param_1 + 0x24;
  FUN_00077d42(local_28,DAT_001ab4b4);
  FUN_0007805e(local_28,0x40,0,0,0,local_20,local_1c,local_18,param_5,param_6,param_7);
  iVar1 = FUN_00077ce4(local_28,1,s_Configuration_1_001ab4b8,1,0,0);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__initialize__addConfigDesc_001ab4ec);
  }
  else {
    FUN_000b2adc(auStack_30,*(undefined1 *)(param_1 + 0x8a),*(undefined1 *)(param_1 + 0x8b),
                 *(undefined1 *)(param_1 + 0x8c),*(undefined2 *)(param_1 + 0x8e),
                 *(undefined1 *)(param_1 + 0x90));
    iVar1 = FUN_000b2968(auStack_30,local_28,s_DFU_Interface_001ab4c8);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__initialize__addDFUModeDes_001ab51c);
      FUN_000b2af0(auStack_30);
    }
    else {
      FUN_000b2af0(auStack_30);
      FUN_001ab9f4(param_1);
      puVar2 = (undefined4 *)FUN_000b1210(auStack_3c);
      *puVar2 = _DAT_001ab4d8;
      uVar3 = FUN_000b4964();
      iVar1 = FUN_000b4840(uVar3,s___USBStackService_001ab4da + 2,auStack_3c);
      if (iVar1 == 0) {
        FUN_00002898(s_ERROR__initialize__Could_NOT_get_001ab550);
        FUN_000b1228(auStack_3c);
      }
      else {
        iVar1 = (**(code **)(*local_34 + 0x2c))(local_34,param_1 + 8);
        if (iVar1 != 0) {
          FUN_000b1228(auStack_3c);
          return 1;
        }
        FUN_00002898(s_ERROR__initialize__Could_not_add_001ab584);
        FUN_000b1228(auStack_3c);
      }
    }
  }
  return 0;
}

