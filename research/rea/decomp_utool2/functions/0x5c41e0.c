// rea decompile_all
// name: FUN_005c41e0
// address: 0x5c41e0
// body: available
// range: 0x5c41e0-0x5c4340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005c41e0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int *piVar7;
  uint uVar8;
  undefined1 local_5;
  
  local_5 = 1;
  iVar2 = in_ECX[2] + -1;
  uVar6 = 1;
  if (-1 < iVar2) {
    iVar4 = iVar2 * 0x10;
    do {
      piVar7 = (int *)(*in_ECX + iVar4);
      iVar5 = *piVar7;
      if (iVar5 == param_1) {
LAB_005c424c:
        if (param_1 - iVar5 < 2) {
          FUN_00425610(iVar2,iVar5);
          local_5 = 0;
        }
        else {
          iVar5 = (param_1 - iVar5) + -1;
          iVar3 = piVar7[1];
          if (iVar5 < piVar7[1]) {
            iVar3 = iVar5;
          }
          piVar7[1] = iVar3;
          local_5 = 0;
        }
      }
      else {
        if (param_1 < iVar5) {
          cVar1 = FUN_005c4380(*piVar7,piVar7[1],piVar7[2],piVar7[3]);
          iVar5 = *piVar7;
        }
        else {
          cVar1 = param_1 <= piVar7[1] + iVar5;
        }
        if (cVar1 != '\0') goto LAB_005c424c;
      }
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + -0x10;
      uVar6 = local_5;
    } while (-1 < iVar2);
  }
  iVar2 = in_ECX[2] + 1;
  if ((in_ECX[1] < iVar2) && (uVar8 = in_ECX[2] + 9 + iVar2 / 2 & 0xfffffff8, in_ECX[1] != uVar8)) {
    if ((int)uVar8 < 1) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
    }
    else if (*in_ECX == 0) {
      iVar2 = FUN_004c554b();
      *in_ECX = iVar2;
    }
    else {
      iVar2 = FUN_004c553b(*in_ECX,uVar8 << 4);
      *in_ECX = iVar2;
    }
    in_ECX[1] = uVar8;
  }
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  piVar7 = (int *)(iVar2 * 0x10 + *in_ECX);
  if (piVar7 != (int *)0x0) {
    *piVar7 = param_1;
    piVar7[1] = param_2;
    piVar7[2] = param_3;
    piVar7[3] = param_4;
  }
  iVar2 = in_ECX[0x19];
  while( true ) {
    if (iVar2 < 1) {
      return uVar6;
    }
    iVar2 = iVar2 + -1;
    if ((in_ECX[0x19] <= iVar2) && (iVar2 = in_ECX[0x19] + -1, iVar2 < 0)) break;
    FUN_00410536();
  }
  return uVar6;
}

