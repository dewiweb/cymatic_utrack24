// rea decompile_all
// name: FUN_0001dc78
// address: 0x1dc78
// body: available
// range: 0x1dc78-0x1ddad inclusive
// range: 0x1ddb0-0x1dde7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001dc78(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar1 = *(int *)(&DAT_00001fc4 + param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0002272c(iVar1 + 4,*(int *)(iVar1 + 0x24) + 4,param_1 + 0x37);
    FUN_00024642(0,DAT_0001dde8,uVar2);
  }
  *(int *)(&DAT_00001fc4 + param_1) = param_3;
  if (param_3 != 0) {
    iVar1 = param_1 + DAT_0001ddec;
    piVar6 = (int *)(param_1 + DAT_0001ddf0);
    do {
      puVar5 = *(undefined4 **)(&DAT_00001fc4 + param_1);
      if ((((((piVar6[2] == puVar5[7]) &&
             (*(short *)(param_2 + 2) == *(short *)((int)puVar5 + 0x49))) &&
            (*(short *)(param_2 + 4) == *(short *)((int)puVar5 + 0x4b))) &&
           ((*(short *)(param_2 + 6) == *(short *)((int)puVar5 + 0x4d) &&
            (*(short *)((int)puVar5 + 6) == *(short *)(iVar1 + 0x12))))) &&
          ((*(short *)(puVar5 + 2) == *(short *)(iVar1 + 0x14) &&
           ((puVar5[5] == *piVar6 && (*(short *)(puVar5 + 4) == *(short *)(iVar1 + 0x1c))))))) &&
         ((puVar5[6] == piVar6[1] &&
          ((iVar3 = FUN_0003b600(puVar5 + 1,piVar6[4] + 4,DAT_0001ddf4), iVar3 != 0 &&
           (iVar3 = FUN_0003b48a(puVar5[8],piVar6[3]), iVar3 != 0)))))) {
        if (*DAT_0001ddf8 != 0) {
          uVar2 = FUN_0002272c(puVar5 + 1,puVar5[9] + 4,param_1 + 0x37);
          FUN_00024642(2,DAT_0001ddfc,*(undefined4 *)(param_1 + 0x3638),(int)puVar5 + 0x49,
                       (int)puVar5 + 0x4f,(int)*(char *)(puVar5 + 0x12),(int)*(char *)(param_2 + 1),
                       uVar2);
        }
        FUN_0016d964((int)puVar5 + 0x49,DAT_0001de00);
        *(undefined1 *)(puVar5 + 0x1f) = 0;
        FUN_0019624c(param_1,puVar5,0);
        if ((*(int *)(param_1 + 0x2884) != 0) && (*(int *)(param_1 + 0x2884) != piVar6[2])) {
          FUN_00195600(param_1);
        }
        *(int *)(param_1 + 0x2884) = piVar6[2];
      }
      puVar4 = *(undefined4 **)(&DAT_00001fc4 + param_1);
      if (puVar4 == puVar5) {
        puVar4 = (undefined4 *)*puVar5;
        *(undefined4 **)(&DAT_00001fc4 + param_1) = puVar4;
      }
    } while (puVar4 != (undefined4 *)0x0);
  }
  return;
}

