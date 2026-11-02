// rea decompile_all
// name: FUN_002275d4
// address: 0x2275d4
// body: available
// range: 0x2275d4-0x2278a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x227870 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002275d4(undefined4 *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r2;
  int iVar7;
  int extraout_r2_00;
  int extraout_r2_01;
  bool bVar8;
  
  if (*(char *)*param_2 == '{') {
    *param_2 = (int)((char *)*param_2 + 1);
    puVar2 = (undefined4 *)FUN_002290e0(param_3 + 0x10,1);
    if (puVar2 != (undefined4 *)0x0) {
      uVar5 = *(undefined4 *)(_DAT_002278a4 + 0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = uVar5;
    }
    iVar6 = param_2[1];
    for (pcVar3 = (char *)*param_2;
        (cVar1 = *pcVar3, cVar1 == ' ' || cVar1 == '\n' || (cVar1 == '\r' || cVar1 == '\t'));
        pcVar3 = pcVar3 + 1) {
LAB_00227694:
    }
    *param_2 = (int)pcVar3;
    param_2[1] = iVar6;
    if (*pcVar3 != '}') {
      iVar6 = 0;
LAB_00227664:
      if (*(char *)*param_2 == '\"') {
        FUN_0022793c(param_1,param_2,param_3);
        pcVar3 = (char *)*param_2;
        iVar7 = param_2[1];
        do {
          cVar1 = *pcVar3;
          if ((cVar1 != ' ' && cVar1 != '\n') && (cVar1 != '\r' && cVar1 != '\t')) {
            *param_2 = (int)pcVar3;
            pcVar4 = pcVar3 + 1;
            *param_2 = (int)pcVar4;
            param_2[1] = iVar7;
            if (*pcVar3 == ':') goto code_r0x00227738;
            param_1[0x66] = s_There_must_be_a_colon_after_the_n_002278d4;
            param_1[0x67] = *param_2 - param_2[1];
            pcVar3 = (char *)FUN_000040c0(param_1 + 6,1);
            iVar7 = extraout_r2_00;
          }
          pcVar3 = pcVar3 + 1;
        } while( true );
      }
      param_1[0x66] = s___Name_of_an_object_member_must_b_002278a6 + 2;
      param_1[0x67] = *param_2 - param_2[1];
      pcVar3 = (char *)FUN_000040c0(param_1 + 6,1);
      iVar6 = extraout_r2;
      goto LAB_00227694;
    }
    *param_2 = (int)(pcVar3 + 1);
    iVar6 = *(int *)(param_3 + 0x1c);
    if (0xf < (uint)(iVar6 - *(int *)(param_3 + 0x18))) {
      uVar5 = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(iVar6 + -4) = 3;
      uVar5 = FUN_00228618(uVar5,0);
      *(undefined4 *)(iVar6 + -0x10) = uVar5;
      FUN_00003b88(uVar5,iVar6,0);
      *(undefined4 *)(iVar6 + -8) = 0;
      *(undefined4 *)(iVar6 + -0xc) = 0;
      return;
    }
  }
LAB_00227870:
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
code_r0x00227738:
  iVar7 = param_2[1];
  do {
    cVar1 = *pcVar4;
    if ((cVar1 != ' ' && cVar1 != '\n') && (cVar1 != '\r' && cVar1 != '\t')) {
      *param_2 = (int)pcVar4;
      param_2[1] = iVar7;
      FUN_00226c04(param_1,param_2,param_3);
      for (pcVar3 = (char *)*param_2;
          (cVar1 = *pcVar3, cVar1 == ' ' || cVar1 == '\n' || (cVar1 == '\r' || cVar1 == '\t'));
          pcVar3 = pcVar3 + 1) {
      }
      pcVar4 = pcVar3 + 1;
      *param_2 = (int)pcVar3;
      *param_2 = (int)pcVar4;
      param_2[1] = param_2[1];
      iVar6 = iVar6 + 1;
      if (*pcVar3 == ',') break;
      if (*pcVar3 == '}') {
        if ((uint)(iVar6 * 0x20) <= (uint)(*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18))) {
          iVar7 = *(int *)(param_3 + 0x1c) + iVar6 * -0x20;
          bVar8 = 0xf < (uint)(iVar7 - *(int *)(param_3 + 0x18));
          if (bVar8) {
            param_1 = (undefined4 *)(iVar7 + -0x10);
          }
          *(int *)(param_3 + 0x1c) = iVar7;
          if (bVar8) {
            uVar5 = *(undefined4 *)(param_3 + 0x10);
            param_1[3] = 3;
            uVar5 = FUN_00228618(uVar5,iVar6 * 0x20);
            *param_1 = uVar5;
            FUN_00003b88(uVar5,iVar7,iVar6 * 0x20);
            param_1[2] = iVar6;
            param_1[1] = iVar6;
            return;
          }
        }
        goto LAB_00227870;
      }
      param_1[0x66] = s_Must_be_a_comma_or_____after_an_o_0022790c;
      param_1[0x67] = *param_2 - param_2[1];
      pcVar4 = (char *)FUN_000040c0(param_1 + 6,1);
      iVar7 = extraout_r2_01;
    }
    pcVar4 = pcVar4 + 1;
  } while( true );
  for (; (cVar1 = *pcVar4, cVar1 == ' ' || cVar1 == '\n' || (cVar1 == '\r' || cVar1 == '\t'));
      pcVar4 = pcVar4 + 1) {
  }
  *param_2 = (int)pcVar4;
  param_2[1] = param_2[1];
  goto LAB_00227664;
}

