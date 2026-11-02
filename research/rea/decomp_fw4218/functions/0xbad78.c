// rea decompile_all
// name: FUN_000bad78
// address: 0xbad78
// body: available
// range: 0xbad78-0xbaf5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bad78(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [20];
  int *local_2c;
  
  (**(code **)(*param_1 + 0x2c))(auStack_40,param_1);
  local_2c = (int *)FUN_0022bc90(param_1 + 1);
  (**(code **)(*local_2c + 0x38))(local_2c,auStack_40,1,1,1);
  if (param_2 < 4) {
    uVar1 = FUN_00064a58(auStack_40);
  }
  else {
    piVar2 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar2 + 0x38))(piVar2,auStack_40,0,0,1);
    iVar3 = FUN_001b23c8(auStack_40);
    iVar4 = FUN_001b2390(auStack_40);
    iVar3 = iVar3 - (iVar4 + 1);
    iVar4 = FUN_00003e14(iVar3 * 3,param_2);
    if (iVar4 < 4) {
      iVar4 = 4;
    }
    uVar6 = FUN_002492ec(param_2 + -3);
    uVar7 = FUN_002492ec(iVar3 - iVar4);
    uVar6 = FUN_00248dc0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                         (int)((ulonglong)uVar6 >> 0x20),uVar7);
    uVar7 = FUN_00249204(param_3);
    FUN_00249444((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                 (int)((ulonglong)uVar6 >> 0x20),uVar7);
    iVar3 = FUN_00249194();
    iVar5 = FUN_001b23b0(auStack_40);
    FUN_000649c4(auStack_40,iVar5 + 1);
    iVar5 = FUN_001b23bc(auStack_40);
    FUN_000649cc(auStack_40,iVar5 + -1);
    iVar5 = FUN_001b2390(auStack_40);
    FUN_000649bc(auStack_40,iVar5 + iVar3);
    iVar3 = FUN_001b2390(auStack_40);
    FUN_000649d4(auStack_40,iVar3 + iVar4);
    piVar2 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar2 + 0x38))(piVar2,auStack_40,1,0,1);
    uVar1 = FUN_00064a58(auStack_40);
  }
  return uVar1;
}

