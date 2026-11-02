// rea decompile_all
// name: FUN_006cf0a0
// address: 0x6cf0a0
// body: available
// range: 0x6cf0a0-0x6cf276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006cf0a0(uint param_1,char param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007269e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 < *(uint *)(in_ECX + 0x30)) {
    iVar7 = *(int *)(*(int *)(in_ECX + 0x28) + param_1 * 4);
    if (iVar7 != 0) {
      if ((param_2 == '\0') ||
         (cVar5 = FUN_006e6420(DAT_00c76070 ^ (uint)&stack0xfffffffc), cVar5 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        FUN_006ccc80();
        if ((*(byte *)(iVar7 + 0x68) & 2) != 0) {
          FUN_006ceba0();
        }
      }
      if (param_1 < *(uint *)(in_ECX + 0x30)) {
        FUN_00410320(param_1);
      }
      *(undefined4 *)(iVar7 + 0xc) = 0;
      if (*(int **)(iVar7 + 0x40) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0x40) + 0x10))();
      }
      iVar2 = *(int *)(iVar7 + 0x30);
      while (iVar2 = iVar2 + -1, iVar4 = DAT_00c8a678, -1 < iVar2) {
        FUN_0048d8f0();
      }
      for (; iVar4 != iVar7; iVar4 = *(int *)(iVar4 + 0xc)) {
        if (iVar4 == 0) goto LAB_006cf17e;
      }
      if (bVar3) {
        if (in_ECX == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)FUN_0040de70(in_ECX);
        }
        if (puVar6 != (undefined4 *)0x0) {
          LOCK();
          puVar6[1] = puVar6[1] + 1;
          UNLOCK();
        }
        local_8 = 0;
        FUN_006cc310();
        if (puVar6 == (undefined4 *)0x0) {
          ExceptionList = local_10;
          return iVar7;
        }
        if (puVar6[2] == 0) {
          LOCK();
          piVar1 = puVar6 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            ExceptionList = local_10;
            return iVar7;
          }
          (**(code **)*puVar6)(1);
          ExceptionList = local_10;
          return iVar7;
        }
        FUN_006cc500(2,1);
        local_8 = 0xffffffff;
        LOCK();
        piVar1 = puVar6 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar6)(1);
        }
      }
      else if ((param_3 == '\0') && (DAT_00c8a678 == iVar7)) {
        FUN_006cc310();
      }
      else {
        FUN_006cc310();
      }
LAB_006cf17e:
      if (param_3 != '\0') {
        FUN_006cedf0();
      }
      if (bVar3) {
        FUN_006cef00();
      }
    }
  }
  else {
    iVar7 = 0;
  }
  ExceptionList = local_10;
  return iVar7;
}

