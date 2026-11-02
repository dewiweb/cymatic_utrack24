// rea decompile_all
// name: FUN_000bdabc
// address: 0xbdabc
// body: available
// range: 0xbdabc-0xbdc23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000bdabc(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar7 = FUN_000bd334(param_1,param_6 == 0 && param_5 == 0);
  uVar2 = FUN_000bfe18(param_1);
  uVar7 = FUN_00002430((uint)uVar7 - param_5,
                       (int)((ulonglong)uVar7 >> 0x20) - (param_6 + (uint)((uint)uVar7 < param_5)),
                       uVar2,0,uVar2,0);
  iVar3 = FUN_000bfda0(param_1);
  uVar4 = FUN_000bda98(param_1);
  iVar3 = iVar3 * (uVar4 >> 3);
  uVar2 = 0;
  uVar7 = FUN_00002430((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),iVar3,0,iVar3,0);
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  uVar4 = (uint)uVar7;
  if ((uint)(uVar4 < 0x3d) <= (uint)-iVar6) {
    uVar7 = CONCAT44(iVar6 - (uint)(uVar4 < 0x3c),uVar4 - 0x3c);
  }
  iVar6 = (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)uVar7;
  uVar8 = FUN_00002430(uVar5,iVar6,0xe10,0,iVar3,uVar2);
  lVar1 = (uVar8 & 0xffffffff) * 0xe10;
  uVar4 = (uint)lVar1;
  iVar3 = FUN_00002430(uVar5 - uVar4,
                       iVar6 - ((int)(uVar8 >> 0x20) * 0xe10 + (int)((ulonglong)lVar1 >> 0x20) +
                               (uint)(uVar5 < uVar4)),0x3c);
  *param_2 = (int)uVar8;
  *param_3 = iVar3;
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_00095274(uVar2,*param_3 + *param_2 * 0x3c);
  return;
}

