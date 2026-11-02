// rea decompile_all
// name: FUN_00408b33
// address: 0x408b33
// body: available
// range: 0x408b33-0x408c28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00408b33(char param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_EBX;
  int local_8;
  
  _memset(unaff_EBX,0,0x20);
  *unaff_EBX = in_EAX;
  uVar3 = FUN_004d021d();
  unaff_EBX[1] = uVar3;
  uVar2 = FUN_00411377();
  iVar4 = local_8;
  if (local_8 == 0) {
    if (uVar2 == 0) {
      return 0;
    }
    bVar1 = FUN_00411330();
    iVar4 = local_8;
    if (local_8 == 0) {
      if ((byte)(bVar1 - 1) < 4) {
        *(byte *)(unaff_EBX + 3) = bVar1;
        iVar4 = (uVar2 + 1) * (uint)bVar1;
        unaff_EBX[2] = (uint)uVar2;
        unaff_EBX[4] = iVar4 + 3 + unaff_EBX[1];
        local_8 = FUN_00411095(iVar4 - (uint)bVar1);
        iVar4 = local_8;
        if ((local_8 != 0) || (iVar5 = FUN_00408aef(&local_8), iVar4 = local_8, local_8 != 0))
        goto LAB_00408bdd;
        if (iVar5 == 0) {
          iVar4 = 8;
          goto LAB_00408bdd;
        }
        unaff_EBX[5] = iVar5 + -1;
        if (param_1 == '\0') {
          iVar4 = FUN_00411095(iVar5 + -1);
          if (iVar4 == 0) {
            return 0;
          }
        }
        else {
          iVar4 = FUN_0041117c(unaff_EBX + 7);
        }
      }
      else {
        iVar4 = 8;
      }
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
LAB_00408bdd:
  FUN_00411a5c(unaff_EBX[6]);
  unaff_EBX[6] = 0;
  return iVar4;
}

