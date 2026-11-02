// rea decompile_all
// name: FUN_00465ea8
// address: 0x465ea8
// body: available
// range: 0x465ea8-0x465f60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00465ea8(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_2 != '\0') {
    uVar6 = *param_1;
    local_8 = uVar6;
    iVar2 = FUN_0046087d();
    iVar3 = FUN_0046087d();
    param_1 = (undefined4 *)0x0;
    if (-1 < iVar3 - iVar2) {
      do {
        iVar4 = FUN_00470c90(&local_8,param_2,iVar2);
        if (iVar4 == 0) {
          if (param_1 != (undefined4 *)0x0) {
            local_c = uVar6;
            FUN_00460825(&local_c);
            uVar5 = FUN_00460791();
            cVar1 = FUN_00464fbb(uVar5);
            if (cVar1 != '\0') goto LAB_00465f4a;
          }
          local_c = uVar6;
          FUN_00460825(&local_c);
          uVar6 = FUN_00460791();
          cVar1 = FUN_00464fbb(uVar6);
          if (cVar1 == '\0') {
            return (int)param_1;
          }
        }
LAB_00465f4a:
        FUN_004607e3();
        param_1 = (undefined4 *)((int)param_1 + 1);
        uVar6 = local_8;
      } while ((int)param_1 <= iVar3 - iVar2);
    }
  }
  return -1;
}

