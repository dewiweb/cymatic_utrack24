// rea decompile_all
// name: FUN_000b77c4
// address: 0xb77c4
// body: available
// range: 0xb77c4-0xb79ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b77c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_64;
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00201f28(auStack_20,0);
    FUN_001aaefc(auStack_30,uVar2);
    FUN_00201f54(auStack_20);
    uVar2 = FUN_00225ca8(param_1 + 0x11);
    FUN_001ab1a2(auStack_30,uVar2);
    FUN_000d7ae4(auStack_34,0,0,0,0);
    FUN_000d7acc(auStack_34,0);
    FUN_000d7ac4(auStack_34,1);
    FUN_000d7ad4(auStack_34,5);
    FUN_000fad30(auStack_4c);
    FUN_000facf4(auStack_4c,0xfa);
    FUN_000facec(auStack_4c,0xfa);
    FUN_000facfc(auStack_4c,0x1e);
    FUN_00064a34(auStack_60);
    FUN_000649bc(auStack_60,0x21);
    FUN_000649d4(auStack_60,0x30);
    FUN_000649cc(auStack_60,0xab);
    FUN_000649c4(auStack_60,5);
    local_64 = 0;
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x28))
              (piVar3,auStack_60,0,0,auStack_30,auStack_34,auStack_4c,&local_64,1,0xffffffff);
    uVar2 = FUN_001b23b0(auStack_60);
    FUN_000649cc(auStack_60,uVar2);
    FUN_000649c4(auStack_60,0);
    piVar3 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar3 + 0x38))(piVar3,auStack_60,1,0,1);
    FUN_00064a58(auStack_60);
    FUN_000fad60(auStack_4c);
    FUN_000d7afc(auStack_34);
    uVar2 = FUN_001aafac(auStack_30);
  }
  return uVar2;
}

