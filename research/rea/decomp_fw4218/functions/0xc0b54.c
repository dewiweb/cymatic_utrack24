// rea decompile_all
// name: FUN_000c0b54
// address: 0xc0b54
// body: available
// range: 0xc0b54-0xc0cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000c0b54(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_238 [4];
  undefined1 auStack_234 [12];
  undefined1 auStack_228 [4];
  undefined1 auStack_224 [4];
  undefined1 auStack_220 [512];
  undefined1 auStack_20 [4];
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  uVar2 = FUN_001b5ae8(uVar1);
  FUN_000bddec(auStack_224,param_1,uVar2);
  iVar3 = FUN_000bd854(param_1,auStack_224);
  if (iVar3 == 0) {
    uVar2 = FUN_001b5ae8(uVar1);
    FUN_000c09dc(auStack_238,param_1,uVar2);
    FUN_000bcb6c(param_1,auStack_238,auStack_224,0);
    FUN_00232190(auStack_238);
  }
  uVar2 = FUN_001b5ae8(uVar1);
  uVar1 = FUN_001b5ae8(uVar1);
  FUN_00002934(auStack_220,0x100,u__ls__ls_04d__ls_04d__04d__s_000c0d28,u_MultiTrack_000c0d10,
               u_Take_000c0d04,uVar1,u_Take_000c0d04,uVar2,param_2,&DAT_000c0cfc);
  uVar1 = FUN_00230e4c(auStack_20);
  FUN_00231ef4(auStack_228,auStack_220,uVar1);
  FUN_00170c04(auStack_234,0,auStack_228);
  piVar4 = (int *)FUN_000f8ee0();
  iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,auStack_234);
  if (iVar3 == 0) {
    uVar1 = FUN_0022d168(auStack_228);
    FUN_00002898(DAT_000c0d90,param_2,uVar1);
    FUN_00170c54(auStack_234);
    FUN_00232190(auStack_228);
    FUN_00232190(auStack_224);
  }
  else {
    uVar1 = FUN_0022d168(auStack_228);
    FUN_00081050(*DAT_000c0d8c,s_Next_Gapless_recording_file_crea_000c0d60,uVar1);
    FUN_00170c54(auStack_234);
    FUN_00232190(auStack_228);
    FUN_00232190(auStack_224);
  }
  return iVar3 != 0;
}

