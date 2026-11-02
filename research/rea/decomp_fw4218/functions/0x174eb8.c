// rea decompile_all
// name: FUN_00174eb8
// address: 0x174eb8
// body: available
// range: 0x174eb8-0x175123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x174f3c to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00174eb8(int param_1,byte *param_2,byte param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char extraout_r1;
  byte *pbVar8;
  
  if (param_4 << 0x1b < 0) {
    if (param_2 == (byte *)0x0) {
LAB_00174f3c:
                    /* WARNING: Subroutine does not return */
      FUN_00003538();
    }
    uVar3 = FUN_00003738();
    FUN_00176438(param_1,param_2,uVar3);
  }
  else if (*param_2 != 0) {
    iVar4 = param_1 + 1;
    iVar5 = param_1 + 2;
    iVar6 = param_1 + 3;
    iVar7 = param_1 + 4;
    do {
      bVar1 = *(byte *)(DAT_00175124 + (uint)*param_2);
      pbVar8 = param_2;
      while ((bVar1 & param_3) == 0) {
        pbVar8 = pbVar8 + 1;
        bVar1 = *(byte *)(DAT_00175124 + (uint)*pbVar8);
      }
      FUN_00176438(param_1,param_2,(int)pbVar8 - (int)param_2);
      bVar1 = *pbVar8;
      if (bVar1 == 0x26) {
        if (0x199 < *(int *)(param_1 + 0x804) + 5U) {
          FUN_00176128(param_1,param_1);
          *(undefined4 *)(param_1 + 0x804) = 0;
        }
        *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x26;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x61;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar5) = 0x6d;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar6) = 0x70;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar7) = 0x3b;
        pbVar8 = pbVar8 + 1;
        *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 5;
      }
      else if (bVar1 < 0x27) {
        if (bVar1 != 0) {
          if (bVar1 == 0x22) {
            if (0x199 < *(int *)(param_1 + 0x804) + 6U) {
              FUN_00176128(param_1,param_1);
              *(undefined4 *)(param_1 + 0x804) = 0;
            }
            *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x26;
            *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x71;
            *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar5) = 0x75;
            *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar6) = 0x6f;
            *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar7) = 0x74;
            *(undefined1 *)(*(int *)(param_1 + 0x804) + param_1 + 5) = 0x3b;
            pbVar8 = pbVar8 + 1;
            *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 6;
          }
          else {
LAB_00174f36:
            pbVar8 = pbVar8 + 1;
            if (0x1f < bVar1) goto LAB_00174f3c;
            cVar2 = FUN_001c6f4c();
            if (0x199 < *(int *)(param_1 + 0x804) + 5U) {
              FUN_00176128(param_1,param_1);
              *(undefined4 *)(param_1 + 0x804) = 0;
            }
            *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x26;
            *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x23;
            *(char *)(*(int *)(param_1 + 0x804) + iVar5) = extraout_r1 + '0';
            *(char *)(*(int *)(param_1 + 0x804) + iVar6) = cVar2 + '0';
            *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar7) = 0x3b;
            *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 5;
          }
        }
      }
      else if (bVar1 == 0x3c) {
        if (0x199 < *(int *)(param_1 + 0x804) + 4U) {
          FUN_00176128(param_1,param_1);
          *(undefined4 *)(param_1 + 0x804) = 0;
        }
        *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x26;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x6c;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar5) = 0x74;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar6) = 0x3b;
        pbVar8 = pbVar8 + 1;
        *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 4;
      }
      else {
        if (bVar1 != 0x3e) goto LAB_00174f36;
        if (0x199 < *(int *)(param_1 + 0x804) + 4U) {
          FUN_00176128(param_1,param_1);
          *(undefined4 *)(param_1 + 0x804) = 0;
        }
        *(undefined1 *)(param_1 + *(int *)(param_1 + 0x804)) = 0x26;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar4) = 0x67;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar5) = 0x74;
        *(undefined1 *)(*(int *)(param_1 + 0x804) + iVar6) = 0x3b;
        pbVar8 = pbVar8 + 1;
        *(int *)(param_1 + 0x804) = *(int *)(param_1 + 0x804) + 4;
      }
      param_2 = pbVar8;
      if (*pbVar8 == 0) {
        return;
      }
    } while( true );
  }
  return;
}

