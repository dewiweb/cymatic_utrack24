// rea decompile_all
// name: FUN_0001fad0
// address: 0x1fad0
// body: available
// range: 0x1fad0-0x1fbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001fad0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar8 = param_2;
  puVar2 = (undefined4 *)FUN_001952a0(0x26c);
  if (puVar2 == (undefined4 *)0x0) {
    pcVar4 = s_No_memory_0001fbe4;
    iVar3 = DAT_0001fbe0;
  }
  else {
    *puVar2 = DAT_0001fbbc;
    puVar2[1] = param_7;
    puVar2[2] = param_8;
    puVar2[7] = 0xffffffff;
    puVar2[0x48] = *DAT_0001fbc0;
    puVar1 = DAT_0001fbc4;
    uVar5 = DAT_0001fbc4[1];
    uVar6 = DAT_0001fbc4[2];
    uVar7 = DAT_0001fbc4[3];
    puVar2[0x49] = *DAT_0001fbc4;
    puVar2[0x4a] = uVar5;
    puVar2[0x4b] = uVar6;
    puVar2[0x4c] = uVar7;
    puVar2[0x4d] = puVar1[4];
    FUN_0002495a(puVar2 + 0x4f,param_4);
    *(short *)(puVar2 + 0x8f) = (short)param_5;
    *(short *)((int)puVar2 + 0x23e) = (short)param_6;
    puVar2[0x90] = (param_2 & 0x1ff) >> 8;
    puVar2[0x92] = (param_2 & 0x7ff) >> 10;
    puVar2[0x91] = 0;
    puVar2[0x93] = (param_2 & 0x1fff) >> 0xc;
    puVar2[0x94] = (param_2 & 0xffff) >> 0xf;
    *(undefined1 *)((int)puVar2 + 0x25a) = 0;
    *(undefined1 *)((int)puVar2 + 0x25b) = 0;
    puVar2[0x95] = 0;
    *(undefined1 *)((int)puVar2 + 0x259) = 0;
    puVar2[0x98] = 0;
    uVar5 = DAT_0001fbc8;
    puVar2[0x9a] = puVar2;
    puVar2[0x99] = uVar5;
    iVar3 = FUN_00199920(_DAT_0001fbcc,puVar2 + 3);
    if (iVar3 == 0) {
      *param_1 = puVar2;
      return 0;
    }
    if (-1 < (int)puVar2[9]) {
      FUN_0019a1f8(_DAT_0001fbcc,puVar2 + 5);
    }
    if (-1 < (int)puVar2[0xa1]) {
      FUN_0019a1f8(_DAT_0001fbcc,puVar2 + 0x9d);
    }
    FUN_00195340(puVar2);
    pcVar4 = s___mDNS_StartQuery_0001fbce + 2;
  }
  FUN_00024642(0,s_DNSServiceQueryRecord___s____d____0001fbf0,param_4,param_5,param_6,pcVar4,iVar3,
               param_1,uVar8,param_3);
  return iVar3;
}

