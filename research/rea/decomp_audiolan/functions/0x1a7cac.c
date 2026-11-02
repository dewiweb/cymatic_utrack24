// rea decompile_all
// name: FUN_001a7cac
// address: 0x1a7cac
// body: available
// range: 0x1a7cac-0x1a7f41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a7cac(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0xfffffffe;
  }
  iVar2 = FUN_00003318(param_2,0x3a);
  if ((iVar2 != 0) && (iVar9 = iVar2 - (int)param_2, 1 < iVar9)) {
    if ((code *)*DAT_001a7f44 == entry) {
      iVar3 = FUN_0019b388(iVar9 + 1);
    }
    else {
      iVar3 = (*(code *)*DAT_001a7f44)(iVar9 + 1);
    }
    *param_1 = iVar3;
    if (iVar3 == 0) {
      return 0xfffffffc;
    }
    FUN_001a702a(iVar3,param_2,iVar9);
    iVar9 = FUN_00003318(*param_1,0x20);
    if (iVar9 == 0) {
      uVar4 = FUN_000034d0(*param_1);
      if ((uVar4 < 3) ||
         ((iVar9 = FUN_001a7022(*param_1,&DAT_001a7f48,3), iVar9 != 0 &&
          (iVar9 = FUN_001a7022(*param_1,&DAT_001a7f4c,4), iVar9 != 0)))) {
        uVar4 = FUN_000034d0(iVar2 + 1);
        if (1 < uVar4) {
          if ((code *)*DAT_001a7f44 == entry) {
            iVar9 = FUN_0019b388(uVar4 + 1);
          }
          else {
            iVar9 = (*(code *)*DAT_001a7f44)(uVar4 + 1);
          }
          param_1[9] = iVar9;
          if (iVar9 != 0) {
            FUN_001a702a(iVar9,iVar2 + 1,uVar4);
            return 0;
          }
          return 0xfffffffc;
        }
      }
      else {
        pcVar5 = (char *)FUN_00003318(param_2,0x3a);
        if (pcVar5 != (char *)0x0) {
          pcVar6 = (char *)FUN_00003318(param_2,0x40);
          if (pcVar6 != (char *)0x0) {
            if (pcVar5[1] == '@') {
              pcVar5 = pcVar5 + 1;
            }
            else {
              pcVar7 = (char *)FUN_00003318(pcVar5 + 1,0x3a);
              pcVar10 = pcVar6;
              if ((pcVar7 != (char *)0x0) &&
                 ((pcVar8 = (char *)FUN_00003318(pcVar5 + 1,0x40), pcVar8 == (char *)0x0 ||
                  (pcVar7 < pcVar8)))) {
                iVar2 = (int)pcVar6 - (int)pcVar7;
                if (iVar2 < 2) {
                  return 0xfffffffb;
                }
                if ((code *)*DAT_001a7f44 == entry) {
                  iVar9 = FUN_0019b388(iVar2);
                }
                else {
                  iVar9 = (*(code *)*DAT_001a7f44)();
                }
                param_1[2] = iVar9;
                if (iVar9 == 0) {
                  return 0xfffffffc;
                }
                FUN_001a702a(iVar9,pcVar7 + 1,iVar2 + -1);
                FUN_0016f8dc(param_1[2]);
                pcVar10 = pcVar7;
              }
              iVar2 = (int)pcVar10 - (int)pcVar5;
              if (iVar2 < 2) {
                return 0xfffffffb;
              }
              if ((code *)*DAT_001a7f44 == entry) {
                iVar9 = FUN_0019b388(iVar2);
              }
              else {
                iVar9 = (*(code *)*DAT_001a7f44)(iVar2);
              }
              param_1[1] = iVar9;
              if (iVar9 == 0) {
                return 0xfffffffc;
              }
              FUN_001a702a(iVar9,pcVar5 + 1,iVar2 + -1);
              FUN_0016f8dc(param_1[1]);
              pcVar5 = pcVar6;
            }
          }
          pcVar6 = (char *)FUN_00003318(pcVar5,0x3f);
          if (pcVar6 == (char *)0x0) {
            iVar2 = FUN_000034d0(param_2);
            pcVar6 = param_2 + iVar2;
          }
          else {
            FUN_001a7f58(param_1,pcVar6);
          }
          pcVar7 = (char *)FUN_00003318(pcVar5,0x3b);
          pcVar10 = pcVar6;
          if (pcVar7 != (char *)0x0) {
            iVar2 = (int)pcVar6 - (int)pcVar7;
            if (iVar2 + 1 < 2) {
              return 0xfffffffb;
            }
            if ((code *)*DAT_001a7f44 == entry) {
              iVar9 = FUN_0019b388(iVar2 + 1);
            }
            else {
              iVar9 = (*(code *)*DAT_001a7f44)(iVar2 + 1);
            }
            if (iVar9 == 0) {
              return 0xfffffffc;
            }
            iVar2 = FUN_001a702a(iVar9,pcVar7,iVar2);
            FUN_001a80e0(param_1,iVar2);
            pcVar10 = pcVar7;
            pcVar6 = pcVar7;
            if (iVar2 != 0) {
              if ((code *)*DAT_001a7f54 == entry) {
                FUN_0018a280(iVar2);
              }
              else {
                (*(code *)*DAT_001a7f54)(iVar2);
              }
            }
          }
          do {
            pcVar7 = pcVar10;
            pcVar10 = pcVar7 + -1;
            cVar1 = *pcVar10;
            pcVar8 = pcVar6;
            if (pcVar10 <= pcVar5) {
              if (cVar1 != ':') goto LAB_001a7ede;
              break;
            }
            if (cVar1 == ']') goto LAB_001a7ede;
          } while (cVar1 != ':');
          if (pcVar5 != pcVar10) {
            iVar2 = (int)pcVar6 - (int)pcVar10;
            if (6 < iVar2 - 2U) {
              return 0xfffffffb;
            }
            if ((code *)*DAT_001a7f44 == entry) {
              iVar9 = FUN_0019b388(iVar2);
            }
            else {
              iVar9 = (*(code *)*DAT_001a7f44)(iVar2);
            }
            param_1[4] = iVar9;
            if (iVar9 == 0) {
              return 0xfffffffc;
            }
            FUN_001a3128(iVar9,pcVar7,iVar2 + -1);
            pcVar6 = pcVar10;
            pcVar8 = pcVar10;
          }
LAB_001a7ede:
          do {
            if (pcVar6 <= pcVar5) {
              if (*pcVar6 == ']') {
LAB_001a7ef6:
                for (; (pcVar5 < pcVar6 && (*pcVar5 != '[')); pcVar5 = pcVar5 + 1) {
                }
                pcVar8 = pcVar6;
                if (pcVar6 <= pcVar5) {
                  return 0xfffffffb;
                }
              }
              iVar2 = (int)pcVar8 - (int)pcVar5;
              if (iVar2 < 2) {
                return 0xfffffffb;
              }
              if ((code *)*DAT_001a7f44 == entry) {
                iVar9 = FUN_0019b388(iVar2);
              }
              else {
                iVar9 = (*(code *)*DAT_001a7f44)(iVar2);
              }
              param_1[3] = iVar9;
              if (iVar9 == 0) {
                return 0xfffffffc;
              }
              FUN_001a3128(iVar9,pcVar5 + 1,iVar2 + -1);
              return 0;
            }
            if (*pcVar6 == ']') goto LAB_001a7ef6;
            pcVar6 = pcVar6 + -1;
          } while( true );
        }
      }
    }
  }
  return 0xfffffffb;
}

