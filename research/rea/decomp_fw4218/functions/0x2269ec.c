// rea decompile_all
// name: FUN_002269ec
// address: 0x2269ec
// body: available
// range: 0x2269ec-0x226bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x226bc8 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002269ec(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *extraout_r1;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int extraout_r2;
  bool bVar9;
  
  if (*(char *)*param_2 == '[') {
    *param_2 = (int)((char *)*param_2 + 1);
    puVar2 = (undefined4 *)FUN_002290e0(param_3 + 0x10,1);
    if (puVar2 != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(DAT_00226bfc + 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = uVar6;
    }
    pcVar4 = (char *)*param_2;
    iVar7 = param_2[1];
    do {
      cVar1 = *pcVar4;
      if ((cVar1 != ' ' && cVar1 != '\n') && (cVar1 != '\r' && cVar1 != '\t')) {
        *param_2 = (int)pcVar4;
        param_2[1] = iVar7;
        if (*pcVar4 == ']') {
          *param_2 = (int)(pcVar4 + 1);
          iVar7 = *(int *)(param_3 + 0x1c);
          if (0xf < (uint)(iVar7 - *(int *)(param_3 + 0x18))) {
            uVar6 = *(undefined4 *)(param_3 + 0x10);
            *(undefined4 *)(iVar7 + -4) = 4;
            uVar6 = FUN_00228618(uVar6,0);
            *(undefined4 *)(iVar7 + -0x10) = uVar6;
            FUN_00003b88(uVar6,iVar7,0);
            *(undefined4 *)(iVar7 + -8) = 0;
            *(undefined4 *)(iVar7 + -0xc) = 0;
            return;
          }
          break;
        }
        iVar7 = 0;
        while( true ) {
          FUN_00226c04(param_1,param_2,param_3);
          iVar7 = iVar7 + 1;
          for (pcVar4 = (char *)*param_2;
              (cVar1 = *pcVar4, cVar1 == ' ' || cVar1 == '\n' || (cVar1 == '\r' || cVar1 == '\t'));
              pcVar4 = pcVar4 + 1) {
          }
          param_2[1] = param_2[1];
          pcVar8 = pcVar4 + 1;
          *param_2 = (int)pcVar8;
          if (*pcVar4 != ',') break;
          for (; (cVar1 = *pcVar8, cVar1 == ' ' || cVar1 == '\n' || (cVar1 == '\r' || cVar1 == '\t')
                 ); pcVar8 = pcVar8 + 1) {
          }
          param_2[1] = param_2[1];
          *param_2 = (int)pcVar8;
        }
        if (*pcVar4 == ']') goto LAB_00226b94;
        *(undefined4 *)(param_1 + 0x198) = DAT_00226c00;
        *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
        FUN_000040c0(param_1 + 0x18,1);
        pcVar4 = extraout_r1;
        iVar7 = extraout_r2;
      }
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
LAB_00226bc8:
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
LAB_00226b94:
  if ((uint)(iVar7 * 0x10) <= (uint)(*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18))) {
    iVar5 = *(int *)(param_3 + 0x1c) + iVar7 * -0x10;
    bVar9 = 0xf < (uint)(iVar5 - *(int *)(param_3 + 0x18));
    if (bVar9) {
      param_2 = (int *)(iVar5 + -0x10);
    }
    *(int *)(param_3 + 0x1c) = iVar5;
    if (bVar9) {
      uVar6 = *(undefined4 *)(param_3 + 0x10);
      param_2[3] = 4;
      iVar3 = FUN_00228618(uVar6,iVar7 * 0x10);
      *param_2 = iVar3;
      FUN_00003b88(iVar3,iVar5,iVar7 * 0x10);
      param_2[2] = iVar7;
      param_2[1] = iVar7;
      return;
    }
  }
  goto LAB_00226bc8;
}

