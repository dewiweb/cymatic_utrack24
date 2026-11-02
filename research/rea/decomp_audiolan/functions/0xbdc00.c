// rea decompile_all
// name: FUN_000bdc00
// address: 0xbdc00
// body: available
// range: 0xbdc00-0xbdd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000bdc00(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 local_78;
  int *piStack_74;
  code *local_70;
  uint uStack_6c;
  undefined1 auStack_68 [4];
  undefined4 local_64;
  undefined1 auStack_60 [28];
  byte local_44 [8];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [16];
  
  pcVar7 = (code *)*DAT_000bdd14;
  uVar8 = DAT_000bdd14[1];
  uVar1 = FUN_001da408(auStack_30);
  piVar2 = (int *)FUN_0017b3e4();
  if (piVar2 == param_1 + 1) {
    param_1 = (int *)((int)param_1 + ((int)uVar8 >> 1));
    if ((uVar8 & 1) != 0) {
      pcVar7 = *(code **)(pcVar7 + *param_1);
    }
    uVar1 = FUN_001da408(auStack_3c,uVar1);
    uVar8 = (*pcVar7)(param_1,uVar1);
    puVar6 = auStack_3c;
  }
  else {
    uVar3 = FUN_001da408(auStack_2c,uVar1);
    uVar1 = DAT_000bdd18;
    local_78 = DAT_000bdd18;
    piStack_74 = param_1;
    local_70 = pcVar7;
    uStack_6c = uVar8;
    iVar4 = FUN_001da408(auStack_68,uVar3);
    FUN_001bcd8c(iVar4 + 4);
    FUN_001da314(auStack_2c);
    (**(code **)(*param_1 + 0x2c))(param_1,&local_78,0xffffffff);
    iVar4 = thunk_EXT_FUN_004001ec(auStack_60,0xffffffff);
    if (iVar4 == 0) {
      pbVar5 = local_44;
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    uVar8 = (uint)*pbVar5;
    local_78 = uVar1;
    local_64 = DAT_000bdd1c;
    FUN_0017a254(auStack_60);
    puVar6 = auStack_68;
  }
  FUN_001da314(puVar6);
  FUN_001da314(auStack_30);
  return uVar8;
}

