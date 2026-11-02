// rea decompile_all
// name: FUN_000d32d4
// address: 0xd32d4
// body: available
// range: 0xd32d4-0xd34a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d32d4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f4fb4();
  FUN_0009526c(uVar1,0);
  FUN_0006de54(uVar2,0);
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_00093c78(uVar1,0);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 1;
  FUN_002399e8(param_1 + 0x2f);
  FUN_00244584(param_1 + 0x35);
  FUN_00244584(param_1 + 0x32);
  iVar3 = FUN_000bc47c(param_1 + 5);
  if (iVar3 == 0) {
    uVar4 = FUN_001b5968(uVar1);
    if (1 < uVar4) {
      (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xd0,1,0);
      (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],0xcf,0);
    }
  }
  else {
    FUN_000bc068(param_1 + 5,0);
  }
  uVar2 = FUN_001b5ae8(uVar1);
  FUN_000bddec(&uStack_24,param_1 + 5,uVar2);
  FUN_0023223c(DAT_000d34a8,&uStack_24);
  FUN_00232190(&uStack_24);
  param_1[0x27] = 0;
  FUN_000c0108(param_1 + 5,param_1 + 0x25,param_1 + 0x26,param_1 + 0x27);
  iVar3 = FUN_000bfe18(param_1 + 5);
  param_1[0x28] = iVar3;
  FUN_0013f9a8(param_1 + 0x3a,param_1[0x2d] + 1);
  *DAT_000d34ac = 1;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  FUN_000d106c(param_1);
  FUN_00093300(uVar1,6);
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*(int *)param_1[0x24] + 0x24))((int *)param_1[0x24],0x2c,0,DAT_000d34b0,0);
  FUN_00081050(*DAT_000d34cc,s_Entered_Recording_State_000d34b4);
  return;
}

