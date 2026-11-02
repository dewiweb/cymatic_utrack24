// rea decompile_all
// name: FUN_00430736
// address: 0x430736
// body: available
// range: 0x430736-0x430a88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00430736(void)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  int local_194;
  int local_190;
  int local_18c;
  char *local_188;
  char *local_184;
  undefined4 local_120;
  int local_10c;
  int local_104;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_cc;
  undefined4 local_b0;
  int local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_48;
  undefined4 local_44;
  int local_38;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_190 = *(int *)(unaff_EDI + 0x1e8);
  FUN_00430687();
  *(undefined4 *)(unaff_EDI + 0x218) = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x21c) = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x220) = 0;
  *(undefined4 *)(unaff_EDI + 0x118) = 7;
  *(undefined4 *)(unaff_EDI + 0x11c) = 1;
  *(undefined4 *)(unaff_EDI + 0xac) = 4;
  *(undefined4 *)(unaff_EDI + 0x15c) = 0xf5c;
  *(undefined4 *)(unaff_EDI + 0x114) = 0x27a000;
  local_194 = FUN_0042e59f(*(undefined4 *)(unaff_EDI + 100));
  if ((((local_194 == 0) && (local_194 = FUN_00430350(), local_194 == 0)) &&
      (local_194 = FUN_0042e719(local_190), local_194 == 0)) &&
     (local_194 = FUN_00430350(), local_194 == 0)) {
    *(byte *)(unaff_EDI + 0xb0) = *(byte *)(unaff_EDI + 0xb0) & 0xfe;
    iVar7 = *(int *)(unaff_EDI + 0x214);
    if (iVar7 != 0) {
      iVar6 = *(int *)(iVar7 + 0x1a0);
      if ((iVar6 != 0) && (iVar6 != *(int *)(iVar7 + 4))) {
        *(int *)(iVar7 + 0x1a0) = 0;
      }
    }
    piVar1 = *(int **)(unaff_EDI + 0x214);
    if ((piVar1 != (int *)0x0) && ((*piVar1 == 0 || (piVar1[1] == 0)))) {
      FUN_0042f111();
    }
    iVar7 = *(int *)(unaff_EDI + 0x214);
    if ((iVar7 != 0) && (uVar5 = 0, *(int *)(iVar7 + 4) != 0)) {
      pcVar2 = (char *)(iVar7 + 0x58);
      do {
        if (*pcVar2 == '\0') {
          FUN_0042f111();
          break;
        }
        uVar5 = uVar5 + 1;
        pcVar2 = pcVar2 + 0xc;
      } while (uVar5 < *(uint *)(*(int *)(unaff_EDI + 0x214) + 4));
    }
    if (*(int *)(unaff_EDI + 0x214) == 0) {
      *(undefined4 *)(unaff_EDI + 0x220) = 0;
    }
    else if (*(int *)(unaff_EDI + 0x220) != 0) {
      uVar3 = FUN_00411976(4,0,&local_194);
      *(undefined4 *)(unaff_EDI + 0x224) = uVar3;
      if (local_194 != 0) {
        *(undefined4 *)(unaff_EDI + 0x220) = 0;
        goto LAB_00430a76;
      }
    }
    *(undefined4 *)(unaff_EDI + 0x1a0) = local_e8;
    if (local_38 != 0) {
      *(undefined4 *)(unaff_EDI + 0x194) = local_48;
      *(undefined4 *)(unaff_EDI + 0x188) = local_44;
      *(undefined4 *)(unaff_EDI + 0x198) = local_2c;
      local_38 = 0;
      *(undefined4 *)(unaff_EDI + 0x19c) = local_28;
    }
    if ((*(int *)(*(int *)(unaff_EDI + 0x80) + 0x34) == 0) && (local_a4 == 0)) {
      local_194 = 3;
    }
    *(undefined4 *)(unaff_EDI + 0x18c) = local_b0;
    *(undefined4 *)(unaff_EDI + 0x1a8) = local_98;
    *(undefined4 *)(unaff_EDI + 0x1ac) = local_94;
    *(undefined4 *)(unaff_EDI + 400) = local_e4;
    local_a4 = 0;
    *(undefined4 *)(unaff_EDI + 0x1a4) = local_cc;
    local_e4 = 0;
    local_cc = 0;
    if (*(int *)(unaff_EDI + 0x170) == 1) {
      iVar7 = 0;
      local_18c = 0;
      local_190 = 0;
      if (0 < local_10c) {
        do {
          *(undefined2 *)(*(int *)(unaff_EDI + 0x180) + iVar7 * 2) = 0;
          *(char **)(*(int *)(unaff_EDI + 0x184) + iVar7 * 4) = ".notdef";
          local_188 = *(char **)(local_104 + iVar7 * 4);
          iVar6 = 0;
          if ((local_188 != (char *)0x0) && (0 < *(int *)(unaff_EDI + 0x1a0))) {
            do {
              local_184 = *(char **)(*(int *)(unaff_EDI + 0x1a4) + iVar6 * 4);
              iVar4 = _strcmp(local_188,local_184);
              if (iVar4 == 0) {
                *(short *)(*(int *)(unaff_EDI + 0x180) + iVar7 * 2) = (short)iVar6;
                *(char **)(*(int *)(unaff_EDI + 0x184) + iVar7 * 4) = local_184;
                iVar6 = _strcmp(".notdef",local_184);
                if (iVar6 != 0) {
                  if (iVar7 < local_18c) {
                    local_18c = iVar7;
                  }
                  if (local_190 <= iVar7) {
                    local_190 = iVar7 + 1;
                  }
                }
                break;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(unaff_EDI + 0x1a0));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_10c);
      }
      *(int *)(unaff_EDI + 0x178) = local_18c;
      *(int *)(unaff_EDI + 0x17c) = local_190;
      *(undefined4 *)(unaff_EDI + 0x174) = local_120;
    }
  }
LAB_00430a76:
  FUN_004306cb();
  return local_194;
}

