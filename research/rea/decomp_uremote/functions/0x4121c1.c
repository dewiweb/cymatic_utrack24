// rea decompile_all
// name: FUN_004121c1
// address: 0x4121c1
// body: available
// range: 0x4121c1-0x4122e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004121c1(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *unaff_ESI;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
LAB_004121c9:
  do {
    local_10 = (int *)*unaff_ESI;
    uVar3 = unaff_ESI[1];
    local_c = uVar3 + (int)local_10;
    if ((int)unaff_ESI[2] < 0) {
      local_8 = 0;
      piVar5 = local_10;
      if (uVar3 <= local_10) {
        uVar2 = FUN_00411976(4,unaff_ESI[3],&local_14);
        unaff_ESI[3] = uVar2;
        piVar5 = local_10;
        if (local_14 != 0) {
          return;
        }
      }
      local_10 = (int *)(unaff_ESI[3] + (int)piVar5 * 4);
      iVar4 = *local_10;
      while (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0xc) & uVar3 + 1) == 0) {
          local_10 = (int *)(iVar4 + 8);
        }
        else {
          *local_10 = *(int *)(iVar4 + 8);
          *(int *)(iVar4 + 8) = local_8;
          local_8 = iVar4;
        }
        iVar4 = *local_10;
      }
      *(int *)(unaff_ESI[3] + 4 + local_c * 4) = local_8;
      unaff_ESI[2] = unaff_ESI[2] + 2;
      if (uVar3 <= piVar5) {
        *unaff_ESI = 0;
        unaff_ESI[1] = uVar3 * 2 + 1;
        goto LAB_004121c9;
      }
      uVar3 = (int)piVar5 + 1;
    }
    else {
      if (((int)unaff_ESI[2] <= local_c + 1) || (local_c + 1U < 9)) {
        return;
      }
      if (local_10 == (int *)0x0) {
        uVar3 = FUN_00411976(4,unaff_ESI[3],&local_18);
        unaff_ESI[3] = uVar3;
        if (local_18 != 0) {
          return;
        }
        unaff_ESI[1] = unaff_ESI[1] >> 1;
        uVar3 = unaff_ESI[1];
      }
      else {
        uVar3 = (int)local_10 - 1;
      }
      for (piVar5 = (int *)(unaff_ESI[3] + uVar3 * 4); *piVar5 != 0; piVar5 = (int *)(*piVar5 + 8))
      {
      }
      piVar1 = (int *)(unaff_ESI[3] + local_c * 4);
      *piVar5 = *piVar1;
      *piVar1 = 0;
      unaff_ESI[2] = unaff_ESI[2] - 2;
    }
    *unaff_ESI = uVar3;
  } while( true );
}

