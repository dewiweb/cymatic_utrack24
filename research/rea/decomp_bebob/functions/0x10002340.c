// rea decompile_all
// name: FUN_10002340
// address: 0x10002340
// body: available
// range: 0x10002340-0x1000248f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10002340(void *this,uint *param_1)

{
  LPOSVERSIONINFOW p_Var1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BOOL BVar5;
  uint *puVar6;
  LPOSVERSIONINFOW p_Var7;
  LPOSVERSIONINFOW lpVersionInformation;
  LPOSVERSIONINFOW p_Var8;
  LPOSVERSIONINFOW local_124;
  uint local_118;
  
  uVar2 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  lpVersionInformation = (LPOSVERSIONINFOW)0x10002375;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  local_124 = (LPOSVERSIONINFOW)0x0;
  p_Var1 = *(LPOSVERSIONINFOW *)((int)this + 0x20);
joined_r0x10002384:
  do {
    p_Var8 = p_Var1;
    if (p_Var8 == (LPOSVERSIONINFOW)0x0) {
      *(LPOSVERSIONINFOW *)((int)this + 0x20) = local_124;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
    p_Var1 = *(LPOSVERSIONINFOW *)p_Var8->szCSDVersion;
    uVar3 = 0x10;
    puVar6 = param_1;
    p_Var7 = p_Var8;
    do {
      if (p_Var7->dwOSVersionInfoSize != *puVar6) {
        iVar4 = (p_Var7->dwOSVersionInfoSize & 0xff) - (uint)(byte)*puVar6;
        if (((iVar4 == 0) &&
            (iVar4 = (uint)*(byte *)((int)&p_Var7->dwOSVersionInfoSize + 1) -
                     (uint)*(byte *)((int)puVar6 + 1), iVar4 == 0)) &&
           (iVar4 = (uint)*(byte *)((int)&p_Var7->dwOSVersionInfoSize + 2) -
                    (uint)*(byte *)((int)puVar6 + 2), iVar4 == 0)) {
          iVar4 = (uint)*(byte *)((int)&p_Var7->dwOSVersionInfoSize + 3) -
                  (uint)*(byte *)((int)puVar6 + 3);
        }
        if ((iVar4 >> 0x1f | 1U) != 0) {
          *(LPOSVERSIONINFOW *)p_Var8->szCSDVersion = local_124;
          local_124 = p_Var8;
          goto joined_r0x10002384;
        }
        break;
      }
      uVar3 = uVar3 - 4;
      puVar6 = puVar6 + 1;
      p_Var7 = (LPOSVERSIONINFOW)&p_Var7->dwMajorVersion;
    } while (3 < uVar3);
    if (p_Var8->dwPlatformId != 0) {
      BVar5 = GetVersionExW(lpVersionInformation);
      if ((BVar5 != 0) && (4 < local_118)) {
        UnregisterDeviceNotification((HDEVNOTIFY)p_Var8->dwPlatformId);
      }
      p_Var8->dwPlatformId = 0;
    }
    FUN_100085b9(p_Var8);
    lpVersionInformation = p_Var8;
  } while( true );
}

