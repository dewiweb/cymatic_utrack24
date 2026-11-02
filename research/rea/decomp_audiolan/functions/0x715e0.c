// rea decompile_all
// name: FUN_000715e0
// address: 0x715e0
// body: available
// range: 0x715e0-0x718ef inclusive
// range: 0x7196c-0x71983 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000715e0(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_a0 [72];
  undefined4 local_58;
  char *local_54;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  
  if (*(int *)(param_1 + 0x1c) < 5) {
    if (param_3 == 0) {
      FUN_000028a4(s____D___Argument_missing_00071921 + 7);
      return 2;
    }
    iVar8 = *(int *)(s____D___Argument_missing_00071921._3_4_ + 8);
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      iVar3 = FUN_000034d0(*param_2);
      iVar4 = *param_2;
      FUN_000e1e1c(auStack_50,iVar8 + 0xfc);
      local_40 = 0;
      uStack_3c = 0;
      FUN_0014f7b8(auStack_38);
      FUN_001b98a8(&local_40);
      pcVar9 = (char *)(iVar4 + iVar3 + -1);
      iVar4 = iVar3;
      for (; (iVar4 != 0 && (*pcVar9 != '/' && *pcVar9 != '\\')); pcVar9 = pcVar9 + -1) {
        iVar4 = iVar4 + -1;
      }
      iVar3 = FUN_000b285c(param_1,*param_2,iVar3 - iVar4);
      if (iVar3 != 0) {
        FUN_000e1e54(iVar8 + 0xfc,auStack_50);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        FUN_0014f868(auStack_38);
        FUN_000e1e40(auStack_50);
        return iVar3;
      }
      iVar5 = *param_2;
      iVar3 = FUN_0015c970(iVar8 + 0xfc);
      FUN_000acc64(auStack_a0);
      uVar2 = DAT_0007193c;
      local_54 = (char *)0x0;
      local_58 = DAT_0007193c;
      if (iVar3 == 0) {
LAB_00071974:
        FUN_000028a4(s_No_leaf_name___s__found_00071984,*param_2);
      }
      else {
        while( true ) {
          iVar3 = iVar3 + -1;
          FUN_000e1cfc(iVar8 + 0xfc,iVar3);
          FUN_0015c8fc(iVar8 + 0xfc,auStack_38);
          iVar6 = FUN_001609a4(auStack_38,iVar5 + iVar4);
          if (iVar6 != 0) break;
          if (iVar3 == 0) goto LAB_00071974;
        }
        iVar4 = FUN_0015c938(iVar8 + 0xfc);
        if (iVar4 != DAT_00071940) goto LAB_00071880;
        iVar4 = FUN_000e1dac(iVar8 + 0xfc,auStack_a0);
        if (iVar4 == 0) {
          FUN_000028a4(s____Leaf_has_no_CnEsysDataProxy_0007194a + 2);
          goto LAB_000717e0;
        }
        FUN_00159870(auStack_a0,&local_58);
        iVar4 = 0;
        pcVar9 = local_54;
        if (local_54 == (char *)0x0) {
          pcVar9 = DAT_00071944;
        }
        iVar3 = FUN_001a0808(*(undefined4 *)(iVar8 + 0x118),1);
        if (*pcVar9 == '\0') goto LAB_00071878;
        while (iVar4 < *(int *)(iVar8 + 0x118) + -1) {
          cVar1 = *pcVar9;
          if (cVar1 == '\n' || cVar1 == '\r') {
            if (0 < iVar4) {
              *(undefined1 *)(iVar3 + iVar4) = 0xd;
              *(undefined1 *)(iVar3 + iVar4 + 1) = 0;
              uVar7 = FUN_00064730();
              FUN_00153ff4(uVar7,iVar3);
              iVar4 = 0;
            }
          }
          else {
            *(char *)(iVar3 + iVar4) = cVar1;
            iVar4 = iVar4 + 1;
          }
          pcVar9 = pcVar9 + 1;
          if (*pcVar9 == '\0') {
            if (0 < iVar4) {
              *(undefined1 *)(iVar3 + iVar4) = 0xd;
              *(undefined1 *)(iVar3 + iVar4 + 1) = 0;
              uVar7 = FUN_00064730();
              FUN_00153ff4(uVar7,iVar3);
            }
LAB_00071878:
            FUN_0019f30c(iVar3);
LAB_00071880:
            FUN_000e1e54(iVar8 + 0xfc,auStack_50);
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
            local_58 = uVar2;
            FUN_0019f30c(local_54);
            FUN_000acc88(auStack_a0);
            FUN_0014f868(auStack_38);
            FUN_000e1e40(auStack_50);
            return 0;
          }
        }
        FUN_000028c0(_DAT_00071920,_DAT_00071948);
        FUN_0019f30c(iVar3);
      }
LAB_000717e0:
      FUN_000e1e54(iVar8 + 0xfc,auStack_50);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      local_58 = uVar2;
      FUN_0019f30c(local_54);
      FUN_000acc88(auStack_a0);
      FUN_0014f868(auStack_38);
      FUN_000e1e40(auStack_50);
    }
  }
  else {
    FUN_000028c0(_DAT_00071920,s_Too_many_recursiv_accsess_of_bat_000718f0);
  }
  return 1;
}

