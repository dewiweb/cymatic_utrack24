// rea decompile_all
// name: FUN_000287d4
// address: 0x287d4
// body: available
// range: 0x287d4-0x28999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_000287d4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int *local_3c [8];
  int local_1c;
  int local_18;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    return (int *)(*(int *)(param_2 + 0x24) + 10);
  }
  iVar8 = 0;
  piVar12 = (int *)0x0;
  local_1c = param_1;
  local_18 = param_2;
  iVar2 = FUN_00024984(*(undefined4 *)(param_2 + 0x20));
  piVar6 = *(int **)(&DAT_000026ec + local_1c);
  if (piVar6 != (int *)0x0) {
    do {
      if (((((char)piVar6[0x86] == '\x02') || ((char)piVar6[0x86] == '\x05')) ||
          ((char)piVar6[0x15f] == '\x02')) || ((char)piVar6[0x15f] == '\x05')) {
        local_3c[0] = piVar6 + 0x10;
        iVar4 = FUN_00024984();
        iVar7 = iVar2;
        if (iVar4 < iVar2) {
          iVar7 = iVar4;
        }
        for (; (0 < iVar7 && (iVar8 < iVar7)); iVar7 = iVar7 + -1) {
          uVar5 = thunk_FUN_0004488c(local_3c[0],iVar4 - iVar7);
          uVar10 = thunk_FUN_0004488c(*(undefined4 *)(local_18 + 0x20),iVar2 - iVar7);
          iVar3 = FUN_000400ea(uVar10,uVar5);
          if (iVar3 != 0) {
            iVar8 = iVar7;
            piVar12 = piVar6;
          }
        }
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    if (piVar12 != (int *)0x0) {
      return piVar12 + 0x10;
    }
  }
  iVar8 = local_1c;
  if (*(char *)(local_1c + DAT_0002899c + 0xc) == '\0') {
    iVar7 = local_1c + DAT_000289a4;
    puVar9 = (undefined1 *)(local_1c + DAT_000289a8);
    iVar2 = local_1c + DAT_000289a8 + -4;
    if ((*(int *)(iVar2 + 0x3c) == -1) && (*(int *)(iVar2 + 4) != 0)) {
      FUN_001e58ac(iVar7,0x260);
      FUN_001eaf9c(local_3c,0x1e,s__d__d__d__d_in_addr_arpa__000289ac,puVar9[3],puVar9[2],puVar9[1],
                   *puVar9);
      iVar2 = iVar7 + 0x130;
      iVar4 = FUN_0002a4de(iVar2,local_3c);
      if (iVar4 == 0) {
        FUN_0002a1c6(0,s_Error__GetStaticHostname___bad_n_00028a58,local_3c);
      }
      else {
        *(undefined4 *)(iVar7 + 0x114) = *DAT_000289c8;
        puVar1 = DAT_000289cc;
        uVar5 = DAT_000289cc[1];
        uVar10 = DAT_000289cc[2];
        uVar11 = DAT_000289cc[3];
        *(undefined4 *)(iVar7 + 0x118) = *DAT_000289cc;
        *(undefined4 *)(iVar7 + 0x11c) = uVar5;
        *(undefined4 *)(iVar7 + 0x120) = uVar10;
        *(undefined4 *)(iVar7 + 0x124) = uVar11;
        *(undefined4 *)(iVar7 + 0x128) = puVar1[4];
        *(undefined2 *)(iVar7 + 0x230) = 0xc;
        *(undefined2 *)(iVar7 + 0x232) = 1;
        *(undefined4 *)(iVar7 + 0x234) = 0;
        *(undefined4 *)(iVar7 + 0x238) = 0;
        *(undefined4 *)(iVar7 + 0x23c) = 0;
        *(undefined4 *)(iVar7 + 0x244) = 0;
        *(undefined4 *)(iVar7 + 0x240) = 1;
        *(undefined1 *)(iVar7 + 0x24e) = 0;
        *(undefined1 *)(iVar7 + 0x24f) = 0;
        *(undefined4 *)(iVar7 + 0x248) = 0;
        *(undefined1 *)(iVar7 + 0x24c) = 0;
        *(undefined1 *)(iVar7 + 0x24d) = 0;
        uVar5 = DAT_000289d0;
        *(undefined4 *)(iVar7 + 0x254) = 0;
        *(undefined4 *)(iVar7 + 0x25c) = 0;
        *(undefined4 *)(iVar7 + 600) = uVar5;
        if (*_DAT_000289d4 != 0) {
          uVar5 = FUN_00025930(*(undefined2 *)(iVar7 + 0x230));
          FUN_0002a1c6(3,s____GetStaticHostname_____s___s__000289d5 + 3,iVar2,uVar5);
        }
        iVar8 = FUN_001e9e00(iVar8,iVar7);
        if (iVar8 != 0) {
          FUN_0002a1c6(0,s_Error__GetStaticHostname___Start_000289f8,iVar8);
        }
      }
    }
    if (*_DAT_000289d4 != 0) {
      uVar5 = FUN_00028288(local_18 + 4,*(int *)(local_18 + 0x24) + 4,local_1c + 0x37);
      FUN_0002a1c6(3,s_GetServiceTarget__Returning_NULL_00028a30,uVar5);
    }
    return (int *)0x0;
  }
  return (int *)(local_1c + DAT_000289a0);
}

