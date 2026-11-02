// rea decompile_all
// name: FUN_0016e8b0
// address: 0x16e8b0
// body: available
// range: 0x16e8b0-0x16e995 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016e8b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_1c [2];
  
  if ((code *)*DAT_0016e998 == entry) {
    puVar1 = (undefined4 *)FUN_0019b388(0x24);
  }
  else {
    puVar1 = (undefined4 *)(*(code *)*DAT_0016e998)(0x24);
  }
  *param_1 = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -4;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  iVar2 = FUN_001a5694(param_3,0,local_1c);
  puVar1 = DAT_0016e99c;
  if (iVar2 < 0) {
    if (*param_1 == 0) goto LAB_0016e96c;
    pcVar4 = (code *)*DAT_0016e99c;
  }
  else {
    iVar3 = FUN_001b91f6(local_1c[0]);
    iVar2 = -1;
    if (iVar3 != 0) {
      iVar2 = FUN_001a6f04(iVar3,&DAT_0016e9a0);
      if (((iVar2 == 0) || (iVar2 = FUN_001a6f04(iVar3,&DAT_0016e9a4), iVar2 == 0)) ||
         (iVar2 = FUN_001a6f04(iVar3,&DAT_0016e9a8), iVar2 == 0)) {
        *(undefined4 *)*param_1 = 0xffffffff;
        *(undefined4 *)(*param_1 + 0x18) = 0;
        *(undefined4 *)(*param_1 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + 0x1c) = 0xffffffff;
      }
      else {
        *(undefined4 *)*param_1 = 500;
        *(undefined4 *)(*param_1 + 0x18) = DAT_0016e9b0;
        *(undefined4 *)(*param_1 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + 0x1c) = 0xffffffff;
      }
      *(undefined1 **)(*param_1 + 0xc) = &LAB_00007d00;
      *(undefined4 *)(*param_1 + 0x10) = 0xffffffff;
      return 0;
    }
    if (*param_1 == 0) goto LAB_0016e96c;
    pcVar4 = (code *)*puVar1;
  }
  if (pcVar4 == entry) {
    FUN_0018a280();
  }
  else {
    (*pcVar4)();
  }
LAB_0016e96c:
  *param_1 = 0;
  return iVar2;
}

