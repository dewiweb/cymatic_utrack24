// rea decompile_all
// name: FUN_0061e750
// address: 0x61e750
// body: available
// range: 0x61e750-0x61e94d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0061e851) */

void FUN_0061e750(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  uint dwMilliseconds;
  longlong lVar8;
  uint local_28;
  int local_24;
  int local_20;
  uint uStack_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d093;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  cVar1 = *(char *)(in_ECX + 0x3c);
  local_14 = 0;
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar2;
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return;
    }
    dwMilliseconds = 500;
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
    iVar6 = *(int *)(in_ECX + 0x78);
    if (iVar6 < 1) {
      local_14 = 0;
    }
    else {
      local_14 = (local_14 + 1) % iVar6;
    }
    iVar4 = FUN_0061e950(local_14);
    if (iVar4 == 0) {
      local_20 = 0;
      uStack_18 = 0;
    }
    else {
      uStack_18 = *(uint *)(iVar4 + 8);
      local_20 = *(int *)(iVar4 + 0xc);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
    if (iVar6 < 1) {
LAB_0061e925:
      WaitForSingleObject(*(HANDLE *)(in_ECX + 0x2c),dwMilliseconds);
    }
    else {
      FUN_00633420(uVar3);
      if ((local_20 < local_24) || ((local_20 <= local_24 && (uStack_18 <= local_28)))) {
        dwMilliseconds = (uint)(local_14 == 0);
        EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
        lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x58);
        local_8 = 0;
        EnterCriticalSection(lpCriticalSection);
        uVar5 = FUN_0061e950(local_14);
        *(undefined4 *)(in_ECX + 0x7c) = uVar5;
        LeaveCriticalSection(lpCriticalSection);
        if (*(int **)(in_ECX + 0x7c) != (int *)0x0) {
          iVar6 = (**(code **)(**(int **)(in_ECX + 0x7c) + 4))();
          EnterCriticalSection(lpCriticalSection);
          if (iVar6 < 0) {
            FUN_00415ff0(*(undefined4 *)(in_ECX + 0x7c));
          }
          else {
            FUN_0061e1c0();
            puVar7 = (undefined4 *)FUN_0061d4e0(local_28,local_24);
            iVar6 = *(int *)(in_ECX + 0x7c);
            *(undefined4 *)(iVar6 + 8) = *puVar7;
            *(undefined4 *)(iVar6 + 0xc) = puVar7[1];
          }
          *(undefined4 *)(in_ECX + 0x7c) = 0;
          LeaveCriticalSection(lpCriticalSection);
        }
        local_8 = 0xffffffff;
        LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
      }
      else {
        FUN_00633c20(uStack_18,local_20,local_28,local_24);
        lVar8 = FUN_006f55df();
        dwMilliseconds = (uint)lVar8;
        if (499 < lVar8) {
          dwMilliseconds = 500;
          goto LAB_0061e925;
        }
      }
      if (0 < (int)dwMilliseconds) goto LAB_0061e925;
    }
    cVar1 = *(char *)(in_ECX + 0x3c);
    ppvVar2 = ExceptionList;
  } while( true );
}

