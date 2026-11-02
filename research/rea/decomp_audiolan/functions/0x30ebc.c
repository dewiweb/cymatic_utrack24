// rea decompile_all
// name: FUN_00030ebc
// address: 0x30ebc
// body: available
// range: 0x30ebc-0x3108f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030ebc(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = DAT_00031128;
  uVar3 = DAT_00031094;
  uVar6 = DAT_00031090;
  if (param_2 == 0) {
    iVar5 = FUN_00030b90(DAT_00031090);
    if (iVar5 != 0) {
      FUN_00029e6c(uVar6);
      FUN_00029eac(3,s_PTP_MSG__RX_announce_msg_ptr____N_000310d8);
    }
  }
  else {
    if (param_1 != (int *)0x0) {
      iVar5 = *param_1;
      uVar6 = *(undefined4 *)(iVar5 + 0x27c);
      cVar1 = *(char *)(iVar5 + 0x25a);
      if (((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x02')) {
        if (*(uint *)(param_2 + 8) < 0x40) {
          iVar5 = FUN_00030b90(DAT_00031094);
          if (iVar5 != 0) {
            FUN_00029e6c(uVar3);
            FUN_00029eac(4,s_PTP_MSG__Received_announce_disca_00031098);
          }
        }
        else {
          iVar8 = *(int *)(param_2 + 0xc);
          if ((*(byte *)(iVar8 + 6) & 1) == 0) {
            uVar2 = CONCAT11(*(undefined1 *)(iVar8 + 0x3d),*(undefined1 *)(iVar8 + 0x3e));
            if (uVar2 < 0xff) {
              if ((*(char *)(iVar8 + 0x21) != *(char *)(iVar5 + 0x268)) &&
                 (iVar5 = FUN_00030b90(DAT_00031128), iVar5 != 0)) {
                FUN_00029e6c(uVar4);
                FUN_00029eac(6,_DAT_0003112c);
              }
              iVar5 = FUN_00030b90(uVar4);
              if (iVar5 != 0) {
                FUN_00029e6c(uVar4);
                FUN_00029eac(6,s___PTP_MSG__RX_announce_from_0003112e + 2);
              }
              uVar7 = 0;
              do {
                iVar5 = FUN_00030b90(uVar4);
                if (iVar5 != 0) {
                  FUN_00029e6c(uVar4);
                  FUN_00029eac(6,&DAT_0003114c,*(undefined1 *)(iVar8 + uVar7 + 0x14));
                }
                uVar7 = uVar7 + 1 & 0xffff;
              } while (uVar7 < 8);
              iVar5 = FUN_00030b90(uVar4);
              if (iVar5 != 0) {
                FUN_00029e6c(uVar4);
                FUN_00029eac(6,s_on_port__d_00031150,*(undefined2 *)(*param_1 + 2));
              }
              if (cVar1 == '\t') {
                iVar5 = FUN_00030c1c(iVar8,uVar6);
                if (iVar5 != 0) {
                  FUN_00030aa4(*param_1 + 0x234);
                  FUN_00030aea(*param_1 + 0x234,param_2);
                  FUN_00036b54(*param_1 + 0x310);
                  uVar6 = FUN_000350e4(*param_1);
                  FUN_00025600(uVar6,iVar8);
                  return;
                }
              }
              else {
                if (cVar1 == '\b') {
                  iVar5 = FUN_00030c1c(iVar8,uVar6);
                }
                else {
                  if (cVar1 != '\a') goto LAB_00031084;
                  iVar5 = FUN_00030c1c(iVar8,*param_1 + 0x20c);
                }
                if (iVar5 != 0) {
                  FUN_00036b54(*param_1 + 0x310);
                }
              }
LAB_00031084:
              FUN_00030cc4(param_1,param_2);
              return;
            }
            iVar5 = FUN_00030b90(DAT_00031094);
            if (iVar5 != 0) {
              FUN_00029e6c(uVar3);
              FUN_00029eac(4,DAT_00031124,uVar2);
            }
          }
        }
      }
      FUN_00030aa4(param_2);
      return;
    }
    iVar5 = FUN_00030b90(DAT_00031090);
    if (iVar5 != 0) {
      FUN_00029e6c(uVar6);
      FUN_00029eac(3,s_PTP_MSG__RX_announce_me____NULL_00031100);
      return;
    }
  }
  return;
}

