// rea decompile_all
// name: FUN_00031af0
// address: 0x31af0
// body: available
// range: 0x31af0-0x31c05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031af0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = _DAT_00031c68;
  uVar2 = DAT_00031c60;
  uVar5 = DAT_00031c08;
  iVar6 = 0;
  if (param_2 == 0) {
    iVar6 = FUN_00030b90(DAT_00031c08);
    if (iVar6 != 0) {
      FUN_00029e6c(uVar5);
      FUN_00029eac(3,s_PTP_MSG__RX_pdelay_request_msg_p_00031c0c);
    }
  }
  else {
    if (param_1 != (int *)0x0) {
      cVar1 = *(char *)(*param_1 + 0x25a);
      if ((((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x02')) &&
         (*(char *)(*param_1 + 0x26d) == '\x02')) {
        if (0x35 < *(uint *)(param_2 + 8)) {
          iVar7 = *(int *)(param_2 + 0xc);
          iVar4 = FUN_00030b90(_DAT_00031c68);
          if (iVar4 != 0) {
            FUN_00029e6c(uVar3);
            uVar5 = FUN_000358f6(*(undefined2 *)(iVar7 + 0x1e));
            FUN_00029eac(6,s__PTP_MSG__RX_pdelay_request_with_00031c6b + 1,uVar5);
          }
          do {
            iVar4 = FUN_00030b90(uVar3);
            if (iVar4 != 0) {
              FUN_00029e6c(uVar3);
              FUN_00029eac(6,&DAT_00031ca0,*(undefined1 *)(iVar7 + iVar6 + 0x14));
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 8);
          iVar6 = FUN_00030b90(uVar3);
          if (iVar6 != 0) {
            FUN_00029e6c(uVar3);
            FUN_00029eac(6,s_on_port__d_00031ca4,*(undefined2 *)(*param_1 + 2));
          }
          FUN_0003372c(param_1,iVar7);
          FUN_00030aa4(param_2);
          return;
        }
        iVar6 = FUN_00030b90(DAT_00031c60);
        if (iVar6 != 0) {
          FUN_00029e6c(uVar2);
          FUN_00029eac(4,DAT_00031c64);
        }
      }
      FUN_00030aa4(param_2);
      return;
    }
    iVar6 = FUN_00030b90(DAT_00031c08);
    if (iVar6 != 0) {
      FUN_00029e6c(uVar5);
      FUN_00029eac(3,s_PTP_MSG__RX_pdelay_request_me____00031c38);
      return;
    }
  }
  return;
}

