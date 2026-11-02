// rea decompile_all
// name: FUN_0013588c
// address: 0x13588c
// body: available
// range: 0x13588c-0x135a5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0013588c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  iVar1 = FUN_000870ac(*(undefined4 *)(param_1 + 8),&local_30,*(undefined1 *)(param_1 + 4));
  if (iVar1 == 0) {
    FUN_00002898(DAT_00135a7c);
    goto LAB_001358fc;
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = FUN_00086e6c(*(undefined4 *)(param_1 + 8),&local_24,*(undefined1 *)(param_1 + 4));
  if (iVar1 == 0) {
    FUN_00002898(DAT_00135a80);
  }
  else {
    iVar2 = FUN_00077ce4(*(int *)(param_1 + 8) + 0x1c,*(undefined1 *)(param_1 + 4),
                         s_Standard_Configuration_00135a60,1,0,0);
    iVar1 = DAT_00135a78;
    uVar3 = DAT_00135a84;
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 8);
      if ((*(int *)(iVar2 + DAT_00135a78 + 0x14) != 0) ||
         (iVar5 = 0, *(int *)(iVar2 + DAT_00135a88 + 0x14) != 0)) {
        iVar5 = 1;
      }
      iVar2 = FUN_000781f4(iVar2 + 0x1c,*(undefined1 *)(param_1 + 4),
                           s_Standard_USB_Audio_2_0_00135a8c,0,
                           (local_20 - local_24 >> 2) + (local_2c - local_30 >> 2) + iVar5 + 2U &
                           0xff,1,0,0x20);
      uVar3 = DAT_00135aa4;
      if (iVar2 != 0) {
        FUN_0006eddc(param_1 + 0x1c,param_1 + 0x94);
        iVar2 = FUN_000c688c(param_1,param_1 + 0x1c);
        if (iVar2 == 0) {
          FUN_00002898(DAT_00135aa8,*(undefined1 *)(param_1 + 4));
          goto LAB_001358ee;
        }
        iVar2 = param_1 + 0x34;
        FUN_0006eddc(iVar2,param_1 + 0xac);
        FUN_0006eddc(iVar2,param_1 + 0xc4);
        iVar2 = FUN_000c688c(param_1,iVar2);
        if (iVar2 == 0) {
          uVar4 = *(undefined1 *)(param_1 + 4);
          uVar3 = DAT_00135aac;
        }
        else {
          iVar2 = param_1 + 0x4c;
          FUN_0006eddc(iVar2,param_1 + 0xb8);
          FUN_0006eddc(iVar2,param_1 + 0xec);
          iVar2 = FUN_000c688c(param_1,iVar2);
          if (iVar2 == 0) {
            uVar4 = *(undefined1 *)(param_1 + 4);
            uVar3 = DAT_00135ab0;
          }
          else {
            if ((*(int *)(*(int *)(param_1 + 8) + iVar1 + 0x14) == 0) &&
               (*(int *)(*(int *)(param_1 + 8) + DAT_00135a88 + 0x14) == 0)) {
              *(undefined1 *)(param_1 + 0x81) = 3;
              *(undefined1 *)(param_1 + 0x142) = 3;
            }
            else {
              FUN_0006eddc(param_1 + 100,param_1 + 0x114);
              iVar1 = FUN_000c688c(param_1,param_1 + 100);
              if (iVar1 == 0) {
                uVar4 = *(undefined1 *)(param_1 + 4);
                uVar3 = DAT_00135ab4;
                goto LAB_001359e8;
              }
            }
            FUN_0006eddc(param_1 + 0x7c,param_1 + 0x138);
            iVar1 = FUN_000c688c(param_1,param_1 + 0x7c);
            if (iVar1 != 0) {
              FUN_00173a54(local_24,local_1c - local_24 >> 2,0);
              FUN_00173a54(local_30,local_28 - local_30 >> 2,0);
              return 1;
            }
            uVar4 = *(undefined1 *)(param_1 + 4);
            uVar3 = DAT_00135ab8;
          }
        }
LAB_001359e8:
        FUN_00002898(uVar3,uVar4);
        goto LAB_001358ee;
      }
    }
    FUN_00002898(uVar3);
  }
LAB_001358ee:
  FUN_00173a54(local_24,local_1c - local_24 >> 2,0);
LAB_001358fc:
  FUN_00173a54(local_30,local_28 - local_30 >> 2,0);
  return 0;
}

