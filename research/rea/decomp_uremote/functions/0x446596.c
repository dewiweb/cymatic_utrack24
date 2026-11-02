// rea decompile_all
// name: FUN_00446596
// address: 0x446596
// body: available
// range: 0x446596-0x446753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446596(int param_1)

{
  int *piVar1;
  short sVar2;
  uint in_EAX;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_c [8];
  
  uVar6 = in_EAX & 0xf000;
  if (uVar6 == 0) {
    if (in_EAX != 0) {
      if (in_EAX != 1) {
        return;
      }
      piVar1 = (int *)(param_1 + 100);
      while (*(int *)(*piVar1 + 0x34) != 0) {
        *piVar1 = *(int *)(*piVar1 + 0x34);
      }
      goto LAB_00446746;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 100) + 0x34);
    if (iVar5 == 0) goto LAB_00446746;
  }
  else {
    if (uVar6 != 0x1000) {
      if (((uVar6 != 0x2000) && (uVar6 != 0x3000)) && (uVar6 != 0x4000)) {
        if (uVar6 != 0x5000) {
          return;
        }
        *(undefined1 *)(param_1 + 0x1c8) = 1;
        FUN_00447525();
        FUN_0045ef8e();
        FUN_0044818a();
        iVar5 = *(int *)(param_1 + 0x1cc);
        sVar2 = 0;
        while (iVar5 != 0) {
          iVar3 = FUN_005af82d(0x14);
          if (iVar3 == 0) {
            psVar4 = (short *)0x0;
          }
          else {
            psVar4 = (short *)FUN_0045f7ee();
          }
          *psVar4 = sVar2;
          FUN_00465317(psVar4 + 2);
          FUN_00448116(local_c);
          FUN_00465317(psVar4 + 4);
          FUN_004652d6();
          *(undefined4 *)(psVar4 + 6) = *(undefined4 *)(iVar5 + 0x2c);
          *(undefined4 *)(psVar4 + 8) = *(undefined4 *)(iVar5 + 0x30);
          FUN_004481ad();
          iVar5 = FUN_004480dc();
          sVar2 = sVar2 + 1;
        }
        FUN_00447cee();
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 0xad) = 1;
        FUN_0047433f();
        FUN_0045efa9();
        return;
      }
      *(undefined1 *)(param_1 + 0x1c8) = 0;
      FUN_00447525();
      return;
    }
    if ((in_EAX & 0xff) < *(uint *)(*(int *)(param_1 + 100) + 0x40)) {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 100) + 0x38) + (in_EAX & 0xff) * 4);
    }
    else {
      iVar5 = 0;
    }
  }
  *(int *)(param_1 + 100) = iVar5;
LAB_00446746:
  FUN_0044642f();
  return;
}

