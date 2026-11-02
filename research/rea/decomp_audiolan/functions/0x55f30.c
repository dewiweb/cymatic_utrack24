// rea decompile_all
// name: FUN_00055f30
// address: 0x55f30
// body: available
// range: 0x55f30-0x5612b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00055f30(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  
  piVar1 = (int *)FUN_0006e06c(param_1,s_SAPService_00056130,0,DAT_0005612c,DAT_0005612c,
                               DAT_0005612c,DAT_0005612c,DAT_0005612c);
  iVar2 = _DAT_0005613c;
  iVar4 = _DAT_0005613c + 0x78;
  *piVar1 = _DAT_0005613c;
  piVar1[0x31] = iVar2 + 0x90;
  piVar1[0x30] = iVar4;
  piVar1[0x33] = 0;
  FUN_001a07ac(piVar1 + 0x32,s_SAPService_00056130);
  piVar1[0x3c] = 0;
  FUN_001a07ac(piVar1 + 0x3b,s___CriticalSection_0005613e + 2);
  *(undefined2 *)(piVar1 + 0x46) = 0;
  *(undefined2 *)((int)piVar1 + 0x11a) = 0;
  *(undefined2 *)(piVar1 + 0x47) = 1;
  piVar1[0x48] = 0;
  *(undefined1 *)(piVar1 + 0x49) = 0;
  *(undefined1 *)((int)piVar1 + 0x125) = 0;
  *(undefined1 *)((int)piVar1 + 0x126) = 0;
  *(undefined1 *)((int)piVar1 + 0x127) = 0;
  *(undefined1 *)(piVar1 + 0x4a) = 0;
  piVar1[0x4b] = 0;
  piVar1[0x4c] = 0;
  piVar1[0x4d] = 0;
  piVar1[0x4e] = 0;
  piVar1[0x4f] = 0;
  piVar1[0x50] = 0;
  piVar1[0x51] = 0;
  piVar1[0x52] = 0;
  piVar1[0x53] = 0;
  FUN_001dc824(piVar1 + 0x4e);
  iVar2 = piVar1[0x50];
  piVar1[0x52] = iVar2;
  piVar1[0x50] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(int *)(piVar1[0x52] + 4) = piVar1[0x52];
  piVar5 = piVar1 + 0x54;
  *piVar5 = 0;
  piVar1[0x55] = 0;
  piVar1[0x56] = 0;
  piVar1[0x57] = 0;
  piVar1[0x58] = 0;
  piVar1[0x59] = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar2 = FUN_0010f82c(0xc,0);
  piVar3[2] = iVar2;
  *piVar3 = *piVar5;
  piVar3[1] = 1;
  *piVar5 = (int)piVar3;
  iVar2 = piVar3[2];
  piVar1[0x56] = iVar2;
  piVar1[0x57] = iVar2 + 0xc;
  piVar1[0x58] = iVar2;
  piVar1[0x56] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(int *)(piVar1[0x58] + 4) = piVar1[0x58];
  piVar1[0x44] = 0;
  iVar2 = FUN_000b9aac();
  *(undefined2 *)((int)piVar1 + 0x11a) = *(undefined2 *)(iVar2 + 600);
  *(undefined2 *)(piVar1 + 0x46) = *(undefined2 *)(iVar2 + 0x25a);
  *(undefined1 *)(piVar1 + 0x49) = *(undefined1 *)(iVar2 + 0x25c);
  *(undefined1 *)((int)piVar1 + 0x125) = *(undefined1 *)(iVar2 + 0x25d);
  FUN_00159d84(&local_18,iVar2);
  FUN_0018e28c(local_18,piVar1 + 0x45);
  FUN_000b97ac(iVar2,piVar1 + 0x31);
  if (local_18 != DAT_00056150) {
    piVar3 = (int *)(local_18 + -0xc);
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != DAT_00056154 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      FUN_0010fa20(local_18 + -0xc,*(int *)(local_18 + -8) + 0xe,0);
    }
  }
  return piVar1;
}

