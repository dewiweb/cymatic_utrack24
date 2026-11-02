// rea decompile_all
// name: FUN_00187260
// address: 0x187260
// body: available
// range: 0x187260-0x187327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00187260(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [2];
  int local_10;
  
  local_10 = param_1;
  FUN_000038a0(param_1,DAT_00187328);
  *(undefined4 *)(local_10 + 0xd4) = 0x1a;
  FUN_000027f4(local_10 + 0xe4,0x100,&DAT_00187338,s_217_12_3_11_0018732c);
  FUN_000027f4(local_10 + 0x1e4,0x100,&DAT_00187338,s_2001_638_500_101_2e0_81ff_fe24_3_0018733c);
  iVar2 = FUN_001a6f50(s_eXosip_4_1_0_00187360);
  *(int *)(local_10 + 0x84) = iVar2;
  if (iVar2 == 0) {
    return -4;
  }
  *(undefined4 *)(local_10 + 0x8c) = 0;
  *(undefined4 *)(local_10 + 0xa8) = 0;
  FUN_001a4c50(local_10 + 0x9c);
  *(undefined4 *)(local_10 + 0x88) = 0;
  iVar2 = FUN_001a48c0(local_18);
  if (iVar2 == 0) {
    FUN_001a6e9c(local_18[0],&local_10);
    FUN_00178cbc(local_18[0]);
    *(undefined4 *)(local_10 + 0xa4) = local_18[0];
    if ((code *)*DAT_00187370 == entry) {
      iVar2 = FUN_0019b388(0x10);
    }
    else {
      iVar2 = (*(code *)*DAT_00187370)(0x10);
    }
    *(int *)(local_10 + 0xac) = iVar2;
    if (iVar2 == 0) {
      return -4;
    }
    FUN_001a3e80();
    *(undefined4 *)(local_10 + 200) = 1;
    *(undefined4 *)(local_10 + 0xcc) = 2;
    uVar1 = DAT_00187374;
    *(undefined4 *)(local_10 + 0xd0) = 1;
    *(undefined4 *)(local_10 + 0xb4) = uVar1;
    *(undefined4 *)(local_10 + 0xc0) = 0;
    *(undefined4 *)(local_10 + 0xdc) = 1;
    iVar2 = 0;
  }
  return iVar2;
}

